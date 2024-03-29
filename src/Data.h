//
// Created by afdom on 10/10/2023.
//

#ifndef PROJECT1_CODE_DATA_H
#define PROJECT1_CODE_DATA_H

#include <iostream>
#include <fstream>
#include <sstream>
#include "UC.h"
#include "Student.h"
#include "Action.h"
#include <algorithm>

/**
 * @class Data
 * @brief Represents the data that was parsed from the csv files.
 */
class Data {
private:
    map<string,UC> uc_map;
    set<Student> allstudents;
    stack<Action> record;
    //map<int,vector<pair<string,string>>> test;

public:
    Data();
    map<string,UC> get_uc_map();
    stack<Action> get_record();
    void set_record(stack<Action> record);
    void set_uc_map(map<string,UC> uc_map);
    set<Student> get_all_students();
    void parse_file1();
    void parse_file2();
    void parse_file3();
    void addAction(Action a);
};


#endif //PROJECT1_CODE_DATA_H
