//
// Created by 서동호 on 2022/06/16.
//

#ifndef C___PROJECT_CUSTOMERLISTEDIT_H
#define C___PROJECT_CUSTOMERLISTEDIT_H

#include "iostream"
#include "vector"
#include "CustomerShow.h"

class CustomerListEdit {
private:
    vector<Customer *> &CustomerList;
public:
    explicit CustomerListEdit(vector<Customer *> &customerList);
    void customerListView();
    void createCustomer();
    void deleteCustomer();
};


#endif //C___PROJECT_CUSTOMERLISTEDIT_H
