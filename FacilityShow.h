//
// Created by 서동호 on 2022/06/10.
//

#ifndef C___PROJECT_FACILITYSHOW_H
#define C___PROJECT_FACILITYSHOW_H

#include <iostream>
#include "vector"
#include "Facility.h"

using namespace std;

class FacilityShow {
private:
    vector<Facility *> &FacilityList;
public:
    explicit FacilityShow (vector<Facility *> &FacilityList);
    void showCusGen();
    void showCusMagic();
    void showCusMagicTimeList(int);
    void showFacilityListForAdmin();
};


#endif //C___PROJECT_FACILITYSHOW_H
