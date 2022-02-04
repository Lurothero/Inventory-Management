//Creating Category class

#include <string>
#include <iostream>

class Category {

public:

//Constructors
Category();

Category(std::string name, std::string id);

void createNewCategory();

std::string get_category_id();
std::string get_category_name();



void editCategory();

//Class Methods
void printCategory();

private:
std::string category_name;
std::string category_id;


};