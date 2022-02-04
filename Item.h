//Creating the item class
#include <string>
#include <iostream>
#include "Category.h"

class Item {

public:


//Default 
Item();

Item (std::string name , const std::string code,std::string desc,std::string detail,int quantity, Category &cat);

//Destructor
~Item();

void printItem() const;
void modifyItem();


//Getters 
std::string getItemName()const ;
const std::string getItemCode()const;
std::string getItemDescription()const;
std::string getItemDetail()const;
int getItemQuantity()const;
Category *getItemCategory()const;

//Setters
void setItemName(std::string new_name) ;
void setItemDescription(std::string new_desc);
void SetItemDetail(std::string new_detail);
void setItemQuantity(int new_quanity);

private:

std::string item_name;
const std::string item_code;
std::string item_description;
std::string item_detail;
int item_quantity;
Category *item_category; 


};

