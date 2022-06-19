//
// Created by 서동호 on 2022/06/17.
//

#include "InputTypeCheck.h"

int InputTypeCheck::inputTypeChecking() {
    int count = 0;
    for (int i = 0; i < input.size(); i++) {
        if (isdigit(this->input[i]) == true) {
            count += 1;
        } else {
            break;
        }
    }
    return count;
}

InputTypeCheck::InputTypeCheck(string idx) {
    this->input = idx;
}

bool InputTypeCheck::typeCheckingCount(const string& str) {
    setIdx(str);
    int count;
    auto *p_str = new InputTypeCheck(str);
    count = p_str->inputTypeChecking();
    delete p_str;

    if (count == str.size()) {
        return true;
    } else {
        return false;
    }
}

void InputTypeCheck::setIdx(string str) {
    this->input = str;
}
