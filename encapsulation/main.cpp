#include "student.h"

int main(){
    Student *aateg = new Student(); 
    string name = "Guilherme";
    int number = 10297272;
    aateg->setInfo(name, number);
    aateg->getInfo();
    //cout << aateg->name << endl; // compilation error
}