#ifndef MEMBERSHIP_H
#define MEMBERSHIP_H


#include <string>

class Membership{

public:

// Constructor / Destructor
Membership() {}
~Membership() {}

// Rate of rebate return value and cost of membership, set to zero for default class
virtual float get_rate() = 0;
virtual float get_cost() = 0;
virtual std::string get_type() = 0;

private:
//none


};


// Subclasses for each Specific Membership Type

class RegularMember : public Membership{

public:

RegularMember(){}
~RegularMember(){}

// Return annual return rate
float get_rate() override
{
    return 0;
}

float get_cost() override
{
    return 65.00; // annual cost of regular membership
}

std::string get_type() override
{
    return "Regular";
}

private:
// none

}; // INSTANCE OF REGULAR MEMBERSHIP CLASS, USE IN PROGRAM


// EXECUTIVE MEMBERSHIP 
class ExecutiveMember : public Membership{

public:

ExecutiveMember(){}
~ExecutiveMember(){}

// Return annual return rate
float get_rate() override
{
    return 0.02;    // 2% return rate
}

float get_cost() override{
    return 120.00; // annual cost of regular membership
}

std::string get_type() override
{
    return "Executive";
}

private:
// none

}; // INSTANCE OF REGULAR MEMBERSHIP CLASS, USE IN PROGRAM

#endif
