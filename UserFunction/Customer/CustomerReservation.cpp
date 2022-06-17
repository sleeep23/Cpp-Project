//
// Created by 서동호 on 2022/06/16.
//

#include "CustomerReservation.h"

void CustomerReservation::setReservationMethod() {
    string idx_method;
    cout << endl;
    cout << "Set your reservation method" << endl;
    cout << "1. General Method (Booking immediately)" << endl;
    cout << "2. Magic Pass (Select booking time)" << endl;
    cout << "Enter your number : ";
    cin >> idx_method;

    FacilityShow showFacility(FacilityList);

    if (idx_method == "1") {
        string idx_general;
        int count, facility_idx = 0;
        this->Customer->setResMethod("General");

        // show Facility List for General
        showFacility.showFacilityForGeneral();

        cout << "Enter your number : ";
        cin >> idx_general;

        auto* p_counter = new TypeCheck(idx_general);
        count = p_counter->typeChecking();
        delete p_counter;

        if (count == idx_general.size()) {
            facility_idx = stoi(idx_general);

            int start = FacilityList[facility_idx - 1]->getFacT_start() + FacilityList[facility_idx - 1]->getFacT_waiting();
            int end = start + FacilityList[facility_idx - 1]->getFacT_interval();

            this->Customer->setResFacility(FacilityList[facility_idx - 1]->getFac_Name());
            this->Customer->setResT_start(start);
            this->Customer->setResT_end(end);

            cout << endl;
            cout << "Reservation Completed" << endl << endl;

            this->Customer->showCustomerReservationInfo();
        } else {
            cout << endl;
            cout << "Enter only digits!" << endl << endl;
            setReservationMethod();
        }

    }
    else if (idx_method == "2") {
        string idx_magic, idx_magic_time;
        int count = 0, count_time = 0;
        int facility_idx, facility_time_idx;
        this->Customer->setResMethod("Magic Pass");

        // show Facility List for Magic Pass
        showFacility.showFacilityForMagic();

        cout << "Enter your number : ";
        cin >> idx_magic;

        auto* p_counter = new TypeCheck(idx_magic);
        count = p_counter->typeChecking();
        delete p_counter;

        facility_idx = stoi(idx_magic);

        if (count == idx_magic.size()) {
            this->Customer->setResFacility(FacilityList[facility_idx - 1]->getFac_Name());
            showFacility.showCusMagicTimeList(facility_idx);
        } else {
            cout << "Enter only digits!" << endl;
            setReservationMethod();
        }

        cout << "Enter your number : ";
        cin >> idx_magic_time;

        auto* p_counter_time = new TypeCheck(idx_magic_time);
        count_time = p_counter_time->typeChecking();
        delete p_counter_time;

        if (count_time == idx_magic_time.size()) {
            facility_time_idx = stoi(idx_magic_time);

            int start = FacilityList[facility_idx - 1]->getFacT_start() + FacilityList[facility_idx - 1]->getFacT_interval() * (facility_time_idx - 1);
            int end = FacilityList[facility_idx - 1]->getFacT_start() + FacilityList[facility_idx - 1]->getFacT_interval() * (facility_time_idx);

            this->Customer->setResT_start(start);
            this->Customer->setResT_end(end);

            cout << endl;
            cout << "Reservation Completed" << endl << endl;

            this->Customer->showCustomerReservationInfo();
        } else {
            cout << "Enter only digits!" << endl;
            setReservationMethod();
        }
    }
    else {
        cout << "Enter your number properly" << endl;
        setReservationMethod();
    }
}

CustomerReservation::CustomerReservation(class Customer *Customer, vector<Facility *> &FacilityList): FacilityList(FacilityList) {
    this->Customer = Customer;
}

void CustomerReservation::reservationMenu() {
    string idx;
    cout << endl;
    cout << "What do you want to do?" << endl;
    cout << "1. Confirm your reservation" << endl;
    cout << "2. Set your reservation" << endl;
    cout << "3. Back to Customer Menu" << endl;
    cout << "Enter your number : ";
    cin >> idx;
    cout << endl;
    if (idx == "2") {
        setReservationMethod();
    } else if (idx == "1") {
        showReservationInfo();
        cout << endl;
        reservationMenu();
    } else if (idx == "3") {
    } else {
        cout << "Enter your number properly!" << endl;
        reservationMenu();
    }
}

void CustomerReservation::showReservationInfo() {
    this->Customer->showCustomerReservationInfo();
}
