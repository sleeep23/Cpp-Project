//
// Created by 서동호 on 2022/06/17.
//

#ifndef C___PROJECT_FACILITYLISTEDIT_H
#define C___PROJECT_FACILITYLISTEDIT_H

#include "iostream"
#include "vector"
#include "FacilityShow.h"

class FacilityListEdit {
private:
    vector<Facility *> &FacilityList;
public:
    explicit FacilityListEdit (vector<Facility *> &FacilityList);
    void facilityListView();
    void createFacility();
    void deleteFacility();
};


#endif //C___PROJECT_FACILITYLISTEDIT_H
