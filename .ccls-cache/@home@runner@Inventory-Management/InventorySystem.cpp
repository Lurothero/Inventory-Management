#include  "InventorySystem.h"

#include <string>
#include <iostream>

InventorySystem::InventorySystem(){
  std::cout << "Creating an  Empty Inventory System...\n" << std::endl;\
  
  inventory_system_name = "Default Inventory System";


}

InventorySystem::InventorySystem(std::string name){
  inventory_system_name = name;
}

InventorySystem::InventorySystem(std::string name, Item item1){

  inventory_system_name = name;
  inventory_item_list.push_back(item1);
  
}

void InventorySystem::printInventorySystemName(){

  std::cout << "The current system name is: " << inventory_system_name <<std::endl;

}

void InventorySystem:: printInventorySystemItems(){

  std::cout << "Printing All Items in \"" <<inventory_system_name <<"\"\n" << std::endl;

if (!inventory_item_list.empty()){

  for (Item itemIndex : inventory_item_list) {

    itemIndex.printItem();
    
  }


}
  else {
    std::cout << "There are no Items in this system \n" << std::endl;
  }


}

void InventorySystem::searchItemByCategory(){

//For now keeping it simple by searching by name




}