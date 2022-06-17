//
// Created by 서동호 on 2022/06/16.
//

#ifndef C___PROJECT_CUSTOMERLOGIN_H
#define C___PROJECT_CUSTOMERLOGIN_H

#include "iostream"
#include "CustomerReservation.h"
#include "vector"

class CustomerLogin {
private:
    vector<Customer *> &CustomerList;
    vector<Facility *> &FacilityList;
public:
    explicit CustomerLogin(vector<Customer *> &CustomerList, vector<Facility *> &FacilityList);
    void customerLogin();
};


#endif //C___PROJECT_CUSTOMERLOGIN_H
