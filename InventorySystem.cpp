#include "InventorySystem.h"

#include <iostream>
#include <string>

InventorySystem::InventorySystem() {
  std::cout << "Creating an  Empty Inventory System...\n" << std::endl;

  inventory_system_name = "Default Inventory System";
}






InventorySystem::InventorySystem(std::string name) {
  inventory_system_name = name;
}







InventorySystem::InventorySystem(std::string name, Item &item1) {

  inventory_system_name = name;
  inventory_item_list.push_back(&item1);

}








void InventorySystem::printInventorySystemName() {

  std::cout << "The current system name is: " << inventory_system_name
            << std::endl;
}

void InventorySystem::printInventorySystemItems() {

  std::cout << "Printing All Items in \"" << inventory_system_name << "\"\n"
            << std::endl;

  if (!inventory_item_list.empty()) {

    for (Item *itemIndex : inventory_item_list) {

      itemIndex->printItem();
    }

  } else {
    std::cout << "There are no Items in this system \n" << std::endl;
  }
}

void InventorySystem::searchItemByCategory() {

  if (!inventory_item_list.empty()) {

    std::string categorySearchQuery;
    // For now keeping it simple by searching by name

    std::cout << "Enter the Category NAME you wish to look for: " << std::endl;

    std::cin >> categorySearchQuery;

    // Search for the category
    for (Item *itemIndex : inventory_item_list) {




      // Look for each item in the inventory
      if (itemIndex->getItemCategory()->get_category_name() ==
          categorySearchQuery) {
        // We get a positive match
        itemIndex->printItem();

      } else {

        std::cout << "No match found... \n" << std::endl;
      }
    }
  } else {

    std::cout << "You are attempting to search in an empty inventory system \n" << std::endl;
  }
}

void InventorySystem::addNewItem(Item &itemToAdd){

//push the new item to the vector
  inventory_item_list.push_back(&itemToAdd);

}

void InventorySystem::editItem(Item &itemToEdit){

  itemToEdit.modifyItem();

}