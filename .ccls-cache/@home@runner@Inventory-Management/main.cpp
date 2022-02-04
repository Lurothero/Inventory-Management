#include <iostream>
//#include "Category.h"
//#include "Item.h"
#include "InventorySystem.h"//Contains the header file for both

int main() {
  std::cout << "Hello World!\n";

//Testing

//(std::string name ,const std::string code,std::string desc,std::string detail,int quantity, Category cat

//Create a Category
Category cat1;
Category cat2("Dairy","DAIRYSERIES");

//Create an item
Item obj1;
Item obj2("Western Dairies' Milk","DAIRY-001","A milk product from Cayo","Fresh Everyday",5,cat2);

//testing class methods
cat1.printCategory();
cat2.printCategory();

obj1.printItem();
obj2.printItem();

//Create a inventory system
//There are three ways 

InventorySystem system1;
InventorySystem system2("My Custom Name Inventory");
InventorySystem system3("My System With An Insertion",obj2);//Obj 2 is western dairy

system1.printInventorySystemName();
system2.printInventorySystemName();
system3.printInventorySystemName();


system1.printInventorySystemItems();
system2.printInventorySystemItems();
system3.printInventorySystemItems();



system1.searchItemByCategory();
system2.searchItemByCategory();
system3.searchItemByCategory();



}