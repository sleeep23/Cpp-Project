#ifndef Admin_H
#define Admin_H

#include <iostream>
#include "../User.h"

using namespace std;

class Administrator : public User{
public:
    Administrator() : User("admin", 0, "admin", "1234"){};
};

#endif