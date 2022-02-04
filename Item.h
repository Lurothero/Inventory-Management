//Creating the item class
#include <string>
#include <iostream>
#include "Category.h"

class Item {

public:

//Public constructors 


//Default 
Item();


//Custom constructor
Item (std::string name , const std::string code,std::string desc,std::string detail,int quantity, Category cat);

void printItem();

Category getItemCategory();
void modifyItem();

//overload = op
Item operator= ( Item newItem);

private:

std::string item_name;
const std::string item_code;
std::string item_description;
std::string item_detail;
int item_quantity;

Category item_category;//<-- address but i dont have time for that 


};

