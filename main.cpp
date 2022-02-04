#include <iostream>
#include "InventorySystem.h"//Contains the header file for both

int main() {
//Testing

//(std::string name ,const std::string code,std::string desc,std::string detail,int quantity, Category cat





//Create a Category
Category cat1;
Category cat2("Dairy","DAIRYSERIES");
Category cat3("Sports","SPORTEQUIPMENTS");

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


//Create a new item to add
Item sports1("BasketBalls","SPORT-001","Standard size basketball","1 ft ball in diameter",10,cat3);
Item sports2("Jet Ski","SPORT-002","100 HP Adult","Only for adults ",3,cat3);
Item sports3("Bows","SPORT-003","Compound Bow","For 16+ young adults",43,cat3);

system2.addNewItem(sports1);
system2.addNewItem(sports2);
system2.addNewItem(sports3);

system2.printInventorySystemItems();

}