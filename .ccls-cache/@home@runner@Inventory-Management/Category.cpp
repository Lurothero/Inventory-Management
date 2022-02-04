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