#ifndef Customer_H
#define Customer_H

#include <iostream>
#include "../User.h"
#include "../../Error/TypeCheck.h"

using namespace std;

class Customer : public User {
private:
    string ResMethod;
    string ResFacility;
    int ResT_start;
    int ResT_end;
public:
    Customer(string name, int age, string id, string pw, string ResMethod = "none", string ResFacility = "none",
             int ResT_start = 540, int ResT_end = 600) : User(name, age, id, pw) {
        this->ResMethod = ResMethod;
        this->ResFacility = ResFacility;
        this->ResT_start = ResT_start;
        this->ResT_end = ResT_end;
    };

    void showCustomerReservationInfo() const;

    void setResMethod(string method);

    void setResFacility(string fac_name);

    void setResT_start(int start);

    void setResT_end(int end);
};

#endif