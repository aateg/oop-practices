#include <iostream>
using namespace std;

class Student {
    private:
        string name;
        int uspNumber;

    public:
        void setInfo(string name, int number);
        void getInfo();
};

void Student::setInfo(string name, int number){
    this->name = name;
    this->uspNumber = number;
}

void Student::getInfo(){
    cout << this->name << endl;
    cout << this->uspNumber << endl;
}