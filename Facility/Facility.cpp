#include <iostream>
#include <iomanip>
#include "Facility.h"


// Constructor

Facility::Facility(string name, int start, int end, int interval, int waiting) {
    this->FacName = name;
    this->FacT_start = (start / 100) * 60 + start % 100;
    this->FacT_end =  (end / 100) * 60 + end % 100;;
    this->FacT_interval = interval;
    this->FacT_waiting = waiting;
}
//roller coaster

// Getting Facility Info

string Facility::getFac_Name() const {
    return this->FacName;
}

int Facility::getFacT_start() const {
    return this->FacT_start;
}

int Facility::getFacT_end() const {
    return this->FacT_end;
}

int Facility::getFacT_interval() const {
    return this->FacT_interval;
}

int Facility::getFacT_waiting() const {
    return this->FacT_waiting;
}


// Setting Facility Info

void Facility::setFacName(string name) {
    this->FacName = name;
}

void Facility::setFacT_start(int start) {
    this->FacT_start = (start / 100) * 60 + start % 100;
}

void Facility::setFacT_end(int end) {
    this->FacT_end = (end / 100) * 60 + end % 100;
}

void Facility::setFacT_interval(int interval) {
    this->FacT_interval = interval;
}

void Facility::setFacT_waiting(int waiting) {
    this->FacT_waiting = waiting;
}
