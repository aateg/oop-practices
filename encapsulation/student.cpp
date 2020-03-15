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

int main(){
    Student *aateg = new Student(); 
    string name = "Guilherme";
    int number = 10297272;
    aateg->setInfo(name, number);
    aateg->getInfo();
}