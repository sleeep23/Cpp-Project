//
// Created by 서동호 on 2022/06/17.
//

#ifndef C___PROJECT_TYPECHECK_H
#define C___PROJECT_TYPECHECK_H

#include "iostream"

using namespace std;

class TypeCheck {
private:
    string idx;
public:
    explicit TypeCheck (string);
    void setIdx(string);
    int typeChecking();
    bool typeCheckingCount(const string&);
};


#endif //C___PROJECT_TYPECHECK_H
