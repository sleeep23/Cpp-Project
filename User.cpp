#include <iostream>
#include <utility>
#include "User.h"

using namespace std;

User::User(string name, int age, string id, string pw) {
    this->name = std::move(name);
    this->age = age;
    this->id = std::move(id);
    this->pw = std::move(pw);
}

// Getting user info
string User::getName() const {
    return this->name;
}

int User::getAge() const{
    return this->age;
}

string User::getId() const{
    return this->id;
}

string User::getPw() const{
    return this->pw;
}


// Setting user info
void User::setName(string user_name) {
    this->name = std::move(user_name);
}

void User::setAge(int user_age) {
    this->age = user_age;
}

void User::setId(string user_id) {
    this->id = std::move(user_id);
}

void User::setPw(string user_pw) {
    this->pw = std::move(user_pw);
}

