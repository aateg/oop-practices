#ifndef STUDENT_H
#define STUDENT_H

#include "student.h"

void Student::setInfo(string name, int number){
    this->name = name;
    this->uspNumber = number;
}

void Student::getInfo(){
    cout << this->name << endl;
    cout << this->uspNumber << endl;
}

#endif //STUDENT_H