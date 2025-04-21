#include "User.h"
#include <string>

User::User(std::string name){
    this->name = name;
}
std::string User::getName() const{
    return this->name;
}