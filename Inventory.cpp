#include"Inventory.h"
#include<iostream>

Inventory::Inventory(){}

Inventory::~Inventory(){
    for(auto i: inventory)
    {
        // deletes the pointer that is the definition in the dictionary
        delete i.second;
    }
}



void Inventory::updateItem(std::string itemName, float itemPrice, int changeAmount){

    // Check if item exists, if it does not, set the price and quantity 
    if(inventory.find(itemName) == inventory.end())
    {
        item* ptr = new item;

        // set item price
        ptr->price = itemPrice;
        // set item amount(initial)
        ptr->quantity = changeAmount;

        // insert item name into map that holds all the information
        inventory.insert({itemName, ptr});
        ptr = NULL;
    }
    else
    {
        // increase amount sold of item within inventory, price shouldn't change
        inventory[itemName]->quantity += changeAmount;
    }
}


// THIS METHOD HARD CHANGES THE AMOUNT OF AN ITEM IN THE INVENTORY, PROBALLY SHOULD NOT NEED TO USE
void Inventory::changeItemQuantity(std::string itemName, int amountOfItem)
{
    if(inventory.find(itemName) == inventory.end())
    {
        throw "Item Not Found In Inventory";
    }

    inventory[itemName]->quantity = amountOfItem;
}


// THIS METHOD HARD CHANGES THE PRICE OF AN ITEM IN THE INVENTORY
void Inventory::changeItemPrice(std::string itemName, float newItemPrice)
{
    if(inventory.find(itemName) == inventory.end())
    {
        throw "Item Not Found In Inventory";
    }

    inventory[itemName]->price = newItemPrice;
}



// Operator that will return an item information accepting a string
// SHOULD BE CALLED WITH .AMOUNT OR .PRICE
item& Inventory::operator[](std::string itemName)
{
    if(inventory.find(itemName) == inventory.end())
    {
        throw "Item Not Found In Inventory";
    }

    return *inventory[itemName];
}


void Inventory::print()
{
    for(auto i : inventory)
    {
        std::cout << i.first << ": " << i.second->price << "   " << i.second->quantity << std::endl;
    }
}
