#include"MemberFiles.h"
#include<fstream>
#include<iostream>
#include<QCoreApplication>
#include<QFile>
#include <QTextStream>

// create variables for different membership types
RegularMember Regular_Membership;
ExecutiveMember Executive_Membership;

MemberFiles::MemberFiles(){
    readFile();
}

MemberFiles::~MemberFiles(){
    for(auto i : member_map)
    {
        delete i.second;
    }
}

void MemberFiles::addMember(Member& member){
    
// If member with the same ID number exists within the map, throw an error
    if(member_map.find(member.getNum()) != member_map.end())
    {
        throw "Cannot add member with ID " + std::to_string(member.getNum()) + ", there exists a member with the same ID";
    }

// else, map the id number to the reference value of the member
    // MAPS MEMBER ID NUMBER TO THE ACTUAL MEMBER VARIABLE
    member_map.insert({member.getNum(), &member});

    int v = 0;
    while (name_map.find(member.getName()) != name_map.end())
    {
        v++;
        member.setName(member.getName() + "_" + std::to_string(v));
    }
    name_map.insert({member.getName(), &member});

}



// Function that will take the id of a member and remove them from the list of members if exists
void MemberFiles::removeMember(Member& member)
{
    // check if the member exists in the map
    if(member_map.find(member.getNum()) == member_map.end())
    {
        throw "Cannot remove member with ID " + std::to_string(member.getNum()) + ",  does not exist in files.";
    }
    std::string n = member_map[member.getNum()]->getName();
    delete name_map[n];

    // else remove member id key from map
    member_map.erase(member.getNum());
    name_map.erase(n);
}




void MemberFiles::readFile()
{

    // variable used to read from file
    QFile inFile(":/resources/txt_files/warehouse shoppers.txt");
    Member* memberPtr;

    if(!inFile.exists())
    {
        qCritical() << "File not Found";
        return;
    }

    if(!inFile.open(QIODevice::ReadOnly))
    {
        qCritical() << inFile.errorString();
        return;
    }

    QTextStream stream(&inFile);

    QString line = "";

    while(!stream.atEnd())
    {
        // pointer that will hold dynamically allocated memory of member
        memberPtr = new Member;

        // read first line (NAME), set the name of dynamically allocated Member instance
        line = stream.readLine();
        memberPtr->setName(line.toStdString());
        
        
        // read second line (ID), set ID of Member
        line = stream.readLine();
        memberPtr->setNum(line.split(" ")[0].toInt());

        line = stream.readLine();

    // ===============================================================
        // IF STATEMENT TO DETERMINE WHAT TYPE OF MEMBERSHIP TYPE TO SET
            // THIS IS PRETTY UGLY SO IF WE NEED TO CHANGE IT WE CAN
    // ===============================================================
        if(line.toStdString() == "Executive")
        {
            memberPtr->changeMembership(Executive_Membership);
        }
        else if (line.toStdString() == "Regular")
        {
            memberPtr->changeMembership(Regular_Membership);
        }
    // ===============================================================

        // Last line is Expiration Date, set it to correct date
        line = stream.readLine();
        memberPtr->changeExpiration(line.toStdString());

        // store member into dictionary
        try
        {
            addMember(*memberPtr);
        }
        catch(std::string s)
        {
            std::cout << s;
        }
    }

    inFile.close();

}





// Accessor operator that will take in the id and return the corresponding member
Member& MemberFiles::operator[](int member_id)
{
    if(member_map.find(member_id) == member_map.end())
    {
        throw "INVALID ID, cannot return Member.";
    }

    return *(member_map[member_id]);
}

