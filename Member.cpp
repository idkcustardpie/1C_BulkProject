#include"Member.h"

Member::Member(std::string n, int num, Membership& ty, std::string exp):name(n), number(num), type(&ty), expiration(exp), expense(0), rebate(0){}

Member::Member() : name(""), number(-1), expiration(""), expense(0), rebate(0){
    RegularMember Regular_Membership;
    type = &Regular_Membership;
}

Member::~Member(){}

// Name functions for each member
void Member::setName(std::string n) {name = n;}
std::string Member::getName() const {return name;}

// ID functions for each member
void Member::setNum(int n) { number = n; }
int Member::getNum() const { return number; }

// Membership functions
void Member::changeMembership(Membership& ty) { type = &ty;}
std::string Member::getType() const { return type->get_type(); }

// expiration functions
void Member::changeExpiration(std::string expir) {expiration = expir;}
std::string Member::getExpiration() const {return expiration;}

// Expense functions
void Member::setExpense(float ex) { expense = ex; }
float Member::getExpense() const { return expense; }


float Member::getRebate() const { return expense * type->get_rate(); }

float Member::getRenewal() const {    return type->get_cost();    }


// Function to keep track of amount of each item purchased
void Member::updateAmount(std::string itemName, int quantity_purchased, float price)
{
    if(purchaseQuantity.find(itemName) == purchaseQuantity.end())
    {
        purchaseQuantity.insert({itemName, quantity_purchased});
    }
    else
    {
        purchaseQuantity[itemName] += quantity_purchased;
    }

    expense += quantity_purchased * price;
}

