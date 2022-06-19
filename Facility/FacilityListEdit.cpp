//
// Created by 서동호 on 2022/06/17.
//

#include "FacilityListEdit.h"

FacilityListEdit::FacilityListEdit(vector<Facility *> &FacilityList) : FacilityList(FacilityList) {}

void FacilityListEdit::facilityListView() {
    string idx;
    auto *p_show_facility = new FacilityShow(FacilityList);
    p_show_facility->showFacilityListForAdmin();
    cout << "What do you want to do?" << endl;
    cout << "1. Create Facility" << endl;
    cout << "2. Delete Facility" << endl;
    cout << "3. Back to Admin Menu" << endl;
    cout << "Enter your number : ";
    cin >> idx;

    if (idx == "1") {
        createFacility();
        delete p_show_facility;
    } else if (idx == "2") {
        deleteFacility();
        delete p_show_facility;
    } else if (idx == "3") {
    } else {
        cout << endl;
        cout << "Enter your number properly" << endl;
        facilityListView();
    }
}

void FacilityListEdit::createFacility() {
    string name, time_start, time_end, time_interval, time_waiting;
    int time_start_int, time_end_int, time_interval_int, time_waiting_int;
    int step_counter = 0;

    auto* p = new InputTypeCheck(" ");
    cout << endl;
    cout << "Enter facility name : ";
    cin >> name;
    cout << "Enter facility time start : ";
    cin >> time_start;

    if (p->typeCheckingCount(time_start)) {
        step_counter += 1;
        cout << "Enter facility time end : ";
        cin >> time_end;
    } else {
        cout << endl << "Enter only digits!" << endl;
        createFacility();
        return;
    }

    if (p->typeCheckingCount(time_end) && step_counter == 1) {
        step_counter += 1;
        cout << "Enter facility time interval : ";
        cin >> time_interval;
    } else {
        cout << endl << "Enter only digits!" << endl;
        createFacility();
        return;
    }

    if (p->typeCheckingCount(time_interval) && step_counter == 2) {
        step_counter += 1;
        cout << "Enter facility time waiting : ";
        cin >> time_waiting;
    } else {
        cout << endl << "Enter only digits!" << endl;
        createFacility();
        return;
    }

    if (p->typeCheckingCount(time_waiting) && step_counter == 3) {
        step_counter += 1;
    } else {
        cout << endl << "Enter only digits!" << endl;
        createFacility();
        return;
    }

    if (step_counter == 4) {

        time_start_int = stoi(time_start);
        time_end_int = stoi(time_end);
        time_interval_int = stoi(time_interval);
        time_waiting_int = stoi(time_waiting);

        FacilityList.push_back(new Facility(name, time_start_int, time_end_int, time_interval_int, time_waiting_int));

        cout << endl;
        cout << "Facility created" << endl;
        cout << endl;

        delete p;

        return;
    }
}

void FacilityListEdit::deleteFacility() {
    string idx;
    int index, count = 0;
    cout << "Enter the index : ";
    cin >> idx;

    auto *p_counter = new InputTypeCheck(idx);
    count = p_counter->inputTypeChecking();
    delete p_counter;

    if (count == idx.size()) {
        index = stoi(idx);
        if (index - 1 <= FacilityList.size()) {
            FacilityList.erase(FacilityList.begin() + index - 1);
        } else {
            cout << endl;
            cout << "Inappropriate access. Enter the index again" << endl;
            deleteFacility();
        }
        cout << endl;
        cout << "Facility information deleted" << endl;
    } else {
        cout << endl;
        cout << "Enter only digits!" << endl;
        deleteFacility();
    }

}


