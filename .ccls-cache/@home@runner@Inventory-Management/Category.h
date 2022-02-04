//Creating Category class

#include <string>
#include <iostream>

class Category {

public:

//Constructors
Category();
~Category();

Category(std::string name, std::string id);

void createNewCategory();
void editExistenCategory();
//getters
std::string get_category_id()const;
std::string get_category_name() const;
//setters
void setCategoryName(std::string newCategoryName);
void setCategoryId(std::string newCategoryId);


void editCategory();
void printCategory();

private:
std::string category_name;
std::string category_id;

};