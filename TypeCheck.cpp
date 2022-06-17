//
// Created by 서동호 on 2022/06/17.
//

#include "TypeCheck.h"

int TypeCheck::typeChecking() {
    int count = 0;
    for (int i = 0; i < idx.size(); i++) {
        if (isdigit(this->idx[i]) == true) {
            count += 1;
        } else {
            break;
        }
    }
    return count;
}

TypeCheck::TypeCheck(string idx) {
    this->idx = idx;
}

bool TypeCheck::typeCheckingCount(string str) {
    setIdx(str);
    int count = 0;
    auto *p_str = new TypeCheck(str);
    count = p_str->typeChecking();
    delete p_str;

    if (count != str.size()) {
        return true;
    } else {
        return false;
    }
}

void TypeCheck::setIdx(string str) {
    this->idx = str;
}
