#ifndef INVENTORY_H
#define INVENTORY_H

#include<map>
#include<string>

struct item{
    // Price of item
    float price;
    // quantity of item sold
    int quantity;
};

class Inventory{

public:
Inventory();
~Inventory();

// method that will increase the amount of a specific item within an inventory
void updateItem(std::string itemName, float itemPrice, int changeAmount);

// method that will hardchange the amount of a specific item within the inventory
void changeItemQuantity(std::string itemName, int amountOfItem);
void changeItemPrice(std::string itemName, float newItemPrice);

// method accepts string and will return an item from the map
item& operator[](std::string itemName);

void print();

// dictionary that will take in an item name and return the item price and quantity
std::map<std::string, item*> inventory;

private:




};



#endif
