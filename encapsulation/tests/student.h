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