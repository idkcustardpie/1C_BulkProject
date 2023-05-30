#ifndef DAILYREPORT_H
#define DAILYREPORT_H

#include"MemberFiles.h"
#include"Inventory.h"

#include<string>
#include<unordered_map>
#include<vector>
#include <set>
#include<fstream>

int const NUM_DAYS = 7;
float const TAX_RATE = 0.0775;

struct sales {
    Member buyer;
    std::string item_name;
    int amount_purchased;
};


class DailyReport
{

public:
    DailyReport(std::string fileName, Inventory& inv, MemberFiles& mf);
~DailyReport();

    void addSale(Member& member, std::string item, int quantity, Inventory& inv);

int getTotalShoppers();
int getExecShoppers();
int getRegShoppers();
float getRevenue();

std::vector<sales*> allSales;

private:


int totalShoppers;
int executiveShoppers;
int regularShoppers;
float revenue;
std::set<Member*> shoppers;

};


#endif
