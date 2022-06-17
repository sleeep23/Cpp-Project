//
// Created by 서동호 on 2022/06/10.
//

#include <iostream>
#include <iomanip>
#include "FacilityShow.h"

using namespace std;

void FacilityShow::showFacilityForGeneral() {
    cout << setfill(' ');
    cout << endl;
    cout << "###############################################################" << endl << endl;
    cout << "                    Facility List for General                  " << endl << endl;
    cout << "###############################################################" << endl << endl;
    cout << "\t" << setw(20) << "Facility" << "\t" << setw(30)  << "Waiting time" << endl;
    cout << "---------------------------------------------------------------" << endl;
    for (int i = 0; i < FacilityList.size(); i++) {
        cout << "\t" << i + 1 << ". " << setw(20) << FacilityList[i]->getFac_Name() << "\t" << setw(20)
             << FacilityList[i]->getFacT_waiting() << " minute" << endl;
    }
    cout << endl;
}

void FacilityShow::showFacilityForMagic() {
    cout << setfill(' ');
    cout << endl;
    cout << "###############################################" << endl << endl;
    cout << "          Facility List for Magic Pass         " << endl << endl;
    cout << "###############################################" << endl << endl;
    cout << "\t" << setw(20) << "Facility" << endl;
    cout << "-----------------------------------------------" << endl;
    for (int i = 0; i < FacilityList.size(); i++) {
        cout << "\t" << i + 1 << ". " << setw(20) << FacilityList[i]->getFac_Name() << endl;
    }
    cout << endl;
}

void FacilityShow::showCusMagicTimeList(int facility_index) {
    int time_start = FacilityList[facility_index - 1]->getFacT_start();
    int time_end = FacilityList[facility_index - 1]->getFacT_end();
    int time_interval = FacilityList[facility_index - 1]->getFacT_interval();

    int time_index = 1;
    cout << endl;
    cout << "#############################################################" << endl << endl;
    cout << "          Facility Time List for "<< FacilityList[facility_index -1]->getFac_Name()<<"         " << endl << endl;
    cout << "#############################################################" << endl << endl;
    for(int start = time_start; start + time_interval <= time_end; start += time_interval) {

        cout << "\t" << time_index << ". "
             << setfill('0') << setw(2) << start / 60
             << ":"
             << setfill('0') << setw(2) << start % 60
             << " ~ "
             << setfill('0') << setw(2) << (start + time_interval) / 60
             << ":"
             << setfill('0') << setw(2) << (start + time_interval) % 60 << endl;

        time_index += 1;
    }
    cout << endl;
}

void FacilityShow::showFacilityListForAdmin() {
    cout << endl;
    cout << "######################################" << endl << endl;
    cout << "   Facility List for Administrator    " << endl << endl;
    cout << "######################################" << endl << endl;
    cout << endl;
    for (int i = 0; i < FacilityList.size(); i++) {

        int time_start = FacilityList[i]->getFacT_start();
        int time_end = FacilityList[i]->getFacT_end();

        cout << i + 1 << "th Facility" << endl;
        cout << "Facility Name : " << FacilityList[i]->getFac_Name() << endl;
        cout << "Facility operation time : ";
        cout << setfill('0') << setw(2) << time_start / 60
             << ":"
             << setfill('0') << setw(2) << time_start % 60
             << " ~ "
             << setfill('0') << setw(2) << time_end / 60
             << ":"
             << setfill('0') << setw(2) << time_end % 60 << endl;
        cout << "Facility waiting time : " << FacilityList[i]->getFacT_waiting() << " min" << endl;
        cout << "Facility time interval : " << FacilityList[i]->getFacT_interval() << " min" << endl;
        cout << endl << endl;
    }
}

FacilityShow::FacilityShow(vector<Facility *> &FacilityList) : FacilityList(FacilityList) {}
