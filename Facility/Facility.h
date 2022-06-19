#ifndef C___PROJECT_FACILITY_H
#define C___PROJECT_FACILITY_H

#include <iostream>
#include "../Error/InputTypeCheck.h"

using namespace std;

class Facility {
private:
    string FacName;
    int FacT_start;
    int FacT_end;
    int FacT_interval;
    int FacT_waiting;
public:
    explicit Facility(string name, int start, int end, int interval, int waiting);

    string getFac_Name() const;
    int getFacT_start() const;
    int getFacT_end() const;
    int getFacT_interval() const;
    int getFacT_waiting() const;

    void setFacName(string);
    void setFacT_start(int);
    void setFacT_end(int);
    void setFacT_interval(int);
    void setFacT_waiting(int);
};

#endif //C___PROJECT_FACILITY_H