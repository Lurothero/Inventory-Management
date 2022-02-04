#include "Category.h"


Category::Category(){
  category_name = "DEFAULT";
  category_id = "000000";

}

Category::Category(std::string name, std::string id){
 category_name = name;
  category_id = id;

}

void Category::printCategory(){

std::cout <<"Category Name is: "<<category_name << std::endl;
std::cout <<"Category ID is: "<<category_id << std::endl;
}



std::string Category:: get_category_id(){
  return category_id;
}

std::string Category::get_category_name(){
  return category_name;
  
}


void Category::createNewCategory(){


  
}

void Category::editCategory(){

//Change the name of the Category
std::string newCategoryName;
std::string newCategoryID;//realistically this should not be modified

std::cout << "Rename category name to? \n" <<std::endl;
std::cin >> newCategoryName;
this->category_name = newCategoryName;

std::cout << "Rename category ID to? \n" <<std::endl;
std::cin >> newCategoryID;
this->category_id = newCategoryID;

}