//
// Created by 서동호 on 2022/06/16.
//

#include "CustomerListEdit.h"
#include "vector"

using namespace std;


CustomerListEdit::CustomerListEdit(vector<Customer *> &CustomerList)
        : CustomerList(CustomerList) {}

void CustomerListEdit::customerListView() {
    string idx;

    auto* p_show_customer = new CustomerShow(CustomerList);
    p_show_customer->showCustomerListForAdmin();

    cout << "What do you want to do?" << endl;
    cout << "1. Create Customer Account" << endl;
    cout << "2. Delete Customer Account" << endl;
    cout << "3. Back to Admin Menu" << endl;
    cout << "Enter your number : ";
    cin >> idx;

    if (idx == "1") {
        createCustomer();
        delete p_show_customer;
    } else if (idx == "2") {
        deleteCustomer();
        delete p_show_customer;
    } else if (idx == "3") {
    } else {
        cout << endl;
        cout << "Enter your number properly" << endl;
        customerListView();
    }
}


void CustomerListEdit::createCustomer() {
    string name, id, pw, age_str;
    int age_int, count = 0;

    cout << "Enter name : ";
    cin >> name;

    cout << "Enter age : ";
    cin >> age_str;

    auto* p_counter = new TypeCheck(age_str);
    count = p_counter->typeChecking();
    delete p_counter;

    if (count == age_str.size()) {
        age_int = stoi(age_str);

        cout << "Enter id : ";
        cin >> id;

        cout << "Enter pw : ";
        cin >> pw;

        CustomerList.push_back(new Customer(name, age_int, id, pw));

        cout << endl;
        cout << "Customer account created!" << endl;

    } else {
        cout << endl;
        cout << "Enter only digits!" << endl;
        createCustomer();
    }
}

void CustomerListEdit::deleteCustomer() {
    string idx;
    int index, count = 0;

    cout << "Enter the index : ";
    cin >> idx;

    auto* p_count = new TypeCheck(idx);
    count = p_count->typeChecking();
    delete p_count;

    if (count == idx.size()) {
        index = stoi(idx);
        if (index - 1 <= CustomerList.size()) {
            CustomerList.erase(CustomerList.begin() + index - 1);
        } else {
            cout << endl;
            cout << "Inappropriate access. Enter the index again" << endl;
            deleteCustomer();
        }
        cout << endl;
        cout << "Customer information deleted" << endl;
    } else {
        cout << endl;
        cout << "Enter only digits!" << endl;
        deleteCustomer();
    }

}

