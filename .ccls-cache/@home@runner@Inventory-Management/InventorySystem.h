#include <string>
#include <vector>
#include "Item.h"

class InventorySystem {

public:

//Constructor 
InventorySystem();
InventorySystem(std::string name);
InventorySystem(std::string name, Item item1);


void printInventorySystemName();
void printInventorySystemItems();

void searchItemByCategory();//By name

void addNewItem(Item itemToAdd);//Add an existing item object to the list
void addNewCategory();


void editItem(Item itemToEdit);

private:

std::string inventory_system_name;
std::vector<Item> inventory_item_list;//maybe the address of the items is better?


};