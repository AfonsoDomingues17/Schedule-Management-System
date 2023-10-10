//
// Created by afdom on 10/10/2023.
//

#include "UC.h"
UC::UC(std::string uccode) {
    this->UC_code = uccode;
}
UC::UC(std::string uccode, Class class1) {
    this->UC_code = uccode;
    this->classes.push_back(class1);
}

void UC::add_class(Class class1) {
    this->classes.push_back(class1);
}

std::string UC::getcode() {
    return this->UC_code;
}