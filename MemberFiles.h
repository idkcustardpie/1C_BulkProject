// Class that will hold a all the different members information by name

#ifndef MEMBERFILES_H
#define MEMBERFILES_H

#include"Member.h"
#include<string>
#include<map>

class MemberFiles{

public:
// Constructor and destructor
MemberFiles();
~MemberFiles();

// Add member 
void addMember(Member& member);
// remove
void removeMember(Member& member);

// operator to read a file of member info
void readFile();

// Return member by id
Member& operator[](int member_id);

// map that will map id's and names to members
std::map<int, Member*> member_map;
std::map<std::string, Member*> name_map;


};



#endif
