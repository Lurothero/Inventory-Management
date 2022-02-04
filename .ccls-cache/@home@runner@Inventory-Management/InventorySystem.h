#include <string>
#include <vector>
#include "Item.h"

class InventorySystem {

public:

//Constructor 
InventorySystem();
~InventorySystem();
InventorySystem(std::string name);
InventorySystem(std::string name, Item &existingItem);


void searchItemByCategory() const;//By name or By ID
void searchItemByCategory(Category &category_query) const;//By object

void addNewItem();//Add by calling a new item constructor 
void addNewItem(Item &itemToAdd);//Add an existing item object to the list
void editItem(Item &itemToEdit);//Edit an existing item
void removeItem();//remove from vector and destroy it

void addNewCategory();
void editCategory(Category &categoryToEdit);


//Getters
void getInventorySystemName() const;
void getInventorySystemItems() const;

//Setters
void setInventoryName(std::string newInventoryName);

//future operator overloading?


private:
std::string inventory_system_name;
std::vector<Item *> inventory_item_list;


};