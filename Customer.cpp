#include <iostream>
#include <iomanip>
#include "Customer.h"

using namespace std;


// Getting Reservation Info
void Customer::showCustomerReservationInfo() const {
    cout << "Your Reservation Info" << endl << endl;
    cout << "Customer Name : " << User::getName() << endl;
    cout << "Reserved Facility Name : " << this->ResFacility << endl;
    cout <<
    "Reserved time : "
    << setfill('0') << setw(2) << ResT_start / 60
    << ":"
    << setfill('0') << setw(2) << ResT_start % 60
    << " ~ "
    << setfill('0') << setw(2) << ResT_end / 60
    << ":"
    << setfill('0') << setw(2) << ResT_end % 60 << endl;
}


// Set Reservation Info

void Customer::setResMethod(string method) {
    this->ResMethod = method;
}

void Customer::setResFacility(string fac_name) {
    this->ResFacility = fac_name;
}

void Customer::setResT_start(int start) {
    this->ResT_start = start;
}

void Customer::setResT_end(int end) {
    this->ResT_end = end;
}