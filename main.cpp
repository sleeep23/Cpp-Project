#include <iostream>
#include "vector"
#include "FacilityListEdit.h"
#include "CustomerListEdit.h"
#include "CustomerLogin.h"
using namespace std;

void isCustomer();
void isAdmin();
void adminMenu();

vector<Customer *> CustomerList = {
        new Customer("apple", 1, "apple", "apple1"),
        new Customer("banana", 2, "banana", "banana2"),
        new Customer("carrot", 3, "carrot", "carrot3"),
        new Customer("dongho", 4, "dongho", "dongho4"),
        new Customer("junghyun", 5, "junghyun", "junghyun5")
};
vector<Facility *> FacilityList = {
        new Facility("Roller Coaster", 900, 2200, 60, 20),
        new Facility("Haunted House", 900, 2200, 60, 15),
        new Facility("Gyro drop", 900, 2200, 60, 5),
        new Facility("Merry-go-round", 900, 2200, 60, 10),
        new Facility("Bumper Car", 900, 2200, 30, 5),
        new Facility("Mono Rail", 900, 2200, 60, 20),
        new Facility("Zoo", 900, 2200, 60, 40),
        new Facility("Viking Rides", 900, 2200, 30, 10)
};

int main() {
    string idx;
    cout << endl << endl;
    cout << "### THIS IS STAR SYSTEM ###" << endl;
    cout << "Who are you?" << endl;
    cout << "1. Customer" << endl;
    cout << "2. Administrator" << endl;
    cout << "Enter your number : ";
    cin >> idx;

    if (idx == "1") {
        isCustomer();
    } else if (idx == "2") {
        isAdmin();
    } else  {
        cout << endl;
        cout << "Enter the number properly" << endl << endl;
        main();
    }

    return 0;
}

void isCustomer() {
    string idx, id, pw;
    cout << endl;
    cout << "*** Customer Menu ***" << endl;
    cout << "1. Customer login" << endl;
    cout << "2. Customer account create" << endl;
    cout << "3. Quit to Main Menu" << endl;
    cout << "Enter your number : ";
    cin >> idx;

    if (idx == "2") {
        CustomerListEdit forCustomerAccount(CustomerList);
        forCustomerAccount.createCustomer();
        isCustomer();
    } else if (idx == "1") {
        CustomerLogin forCustomerLogin(CustomerList, FacilityList);
        forCustomerLogin.customerLogin();
        isCustomer();
    } else if (idx == "3") {
        main();
    } else {
        cout << endl;
        cout << "Enter your number properly" << endl;
        isCustomer();
    }
}

void isAdmin() {
    string id, pw;
    cout << "Enter admin id : ";
    cin >> id;
    if (id == "admin") {
        cout << "Enter admin password : ";
        cin >> pw;
        if (pw == "1234") {
            cout << endl;
            cout << "Login complete!" << endl;
            adminMenu();
        } else {
            cout << endl;
            cout << "Wrong password. Login again" << endl;
            main();
        }
    } else {
        cout << endl;
        cout << "Wrong Id. Login again" << endl;
        main();
    }

}

void adminMenu() {
    string idx;
    cout << endl;
    cout << "*** Administrator Menu ***" << endl;
    cout << "1. Customer List View and Edit" << endl;
    cout << "2. Facility List View and Edit" << endl;
    cout << "3. Back to Main Menu" << endl;
    cout << "Enter your number : ";
    cin >> idx;

    auto* p_customer = new CustomerListEdit(CustomerList);
    auto* p_facility = new FacilityListEdit(FacilityList);

    if (idx == "1") {
        // View Customer list and edit
        p_customer->customerListView();
        cout << endl << "Going Back to Admin Menu" << endl;
        delete p_customer;
        adminMenu();
    } else if (idx == "2") {
        // View Facility list and edit
        p_facility->facilityListView();
        cout << endl << "Going Back to Admin Menu" << endl;
        delete p_facility;
        adminMenu();
    } else if (idx == "3") {
        main();
    } else {
        cout << endl;
        cout << "Enter your number properly" << endl;
        adminMenu();
    }
}
