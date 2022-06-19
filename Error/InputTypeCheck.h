//
// Created by 서동호 on 2022/06/17.
//

#ifndef C___PROJECT_INPUTTYPECHECK_H
#define C___PROJECT_INPUTTYPECHECK_H

#include "iostream"

using namespace std;

class InputTypeCheck {
private:
    string input;
public:
    explicit InputTypeCheck (string);
    void setIdx(string);
    int inputTypeChecking();
    bool typeCheckingCount(const string&);
};


#endif //C___PROJECT_INPUTTYPECHECK_H
