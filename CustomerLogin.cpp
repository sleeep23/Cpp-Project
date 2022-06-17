//
// Created by 서동호 on 2022/06/16.
//

#include "CustomerLogin.h"

using namespace std;

CustomerLogin::CustomerLogin(vector<Customer *> &CustomerList, vector<Facility *> &FacilityList)
        : CustomerList(CustomerList), FacilityList(FacilityList) {}

void CustomerLogin::customerLogin() {
    int out = 0;
    int index;
    string id, pw;

    cout << endl;
    cout << "Enter your id : ";
    cin >> id;
    for (int i = 0; i < CustomerList.size(); i++) {
        if (id == CustomerList[i]->getId()) {
            cout << "Enter your pw : ";
            cin >> pw;
            if (pw == CustomerList[i]->getPw()) {
                index = i;
                break;
            } else {
                cout << "Your password is wrong. Enter again" << endl;
                customerLogin();
            }
        } else {
            out += 1;
            continue;
        }
    }

    if (out == CustomerList.size()) {
        cout << endl << "Your id doesn't exist. Please create your account first." << endl;
    } else {
        CustomerReservation forReservation(CustomerList[index], FacilityList);
        forReservation.reservationMenu();
    }

}
