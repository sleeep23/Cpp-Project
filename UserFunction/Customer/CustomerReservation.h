//
// Created by 서동호 on 2022/06/16.
//

#ifndef C___PROJECT_CUSTOMERRESERVATION_H
#define C___PROJECT_CUSTOMERRESERVATION_H

#include "iostream"
#include "CustomerListEdit.h"
#include "../../Facility/FacilityShow.h"
#include "vector"

class CustomerReservation {
private:
    Customer *Customer;
    vector<Facility *> &FacilityList;
public:
    explicit CustomerReservation(class Customer *Customer, vector<Facility *> &FacilityList);
    void reservationMenu();
    void showReservationInfo();
    void setReservationMethod();
};


#endif //C___PROJECT_CUSTOMERRESERVATION_H
