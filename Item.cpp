#include "Item.h"



Item::Item(): item_code("00000CODE"){
std::cout << "Creating an empty object is not allowed but will have place holder for testing!";

item_name = "DEFAULT NAME";
//const std::string item_code = "";  <-- No longer needed 
item_description = "DEFAULT DESCRIPTION";
item_detail = "DEFAULT DETAILS";
item_quantity = 0;



//I need a better solution here...
Category c;
item_category = c;

}

Item::Item (std::string name , const std::string code,std::string desc,std::string detail,int quantity, Category cat) : item_code(code){

  item_name = name;
  //const std::string item_code = code;
  item_description = desc;
  item_detail = detail;
  item_quantity = quantity;

  item_category = cat;
}





void Item::printItem(){

  std::cout<< "Name: " << item_name <<std::endl;
  std::cout<< "Code: " <<  item_code  <<std::endl;
  std::cout<< "Description: " << item_description <<std::endl;
  std::cout<< "Detail: " << item_detail <<std::endl;
  std::cout<< "Quantity: " << item_quantity <<std::endl;

  item_category.printCategory();

  
}


Category Item::getItemCategory(){

  return this->item_category;

}

void Item::modifyItem(){

  //Start changing Item data members except code


  //Temp variables for updating item info
  std::string newName;
  std::string newDescription;
  std::string newDetail;
  int newQuantity;
  Category newCategory;


  std::cout << "Rename to? \n";
  std::cin >>  newName  ;
  //is using this pratical in this context?
  this->item_name  = newName;

  this->  item_category = newCategory.editCategory();//A new cat would be better

}

Item operator= ( Item newItem){

  
}