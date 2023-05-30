#ifndef MEMBER_H
#define MEMBER_H

#include<string>
#include"Membership.h"
#include<map>

class Member 
{
private:
    std::string name;
    int number;
    Membership* type;
    std::string expiration;
    float expense; // Amount_spent
    float rebate;

public:
    Member(std::string n, int num, Membership& ty, std::string exp);
    Member();
    ~Member();
    void setName(std::string n);
    std::string getName() const;
    void setNum(int num);
    int getNum() const;
    void changeMembership(Membership& ty);
    std::string getType() const;
    void changeExpiration(std::string expir);
    std::string getExpiration() const;
    void setExpense(float ex);
    float getExpense() const;
    float getRebate() const;
    float getRenewal() const;

    void setConversion();
    float getConversion() const;

    // Keeps track of how many of each item has been purchased
    std::map<std::string, int> purchaseQuantity;

    // FUNCTIONS TO KEEP TRACK OF HOW MUCH OF EACH ITEM HAS BEEN PURCHASED
    void updateAmount(std::string itemName, int quantity_purchased, float price);

};


#endif
