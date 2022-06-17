//
// Created by 서동호 on 2022/06/17.
//

#ifndef C___PROJECT_CUSTOMERSHOW_H
#define C___PROJECT_CUSTOMERSHOW_H

#include "iostream"
#include "vector"
#include "Customer.h"

class CustomerShow {
private:
    vector<Customer *> &CustomerList;
public:
    explicit CustomerShow (vector<Customer *> &CustomerList);
    void showCustomerListForAdmin();
};


#endif //C___PROJECT_CUSTOMERSHOW_H
