#include <iostream>
using namespace std;

class Abstraksiklas {
private: string x, y;

public:
    // method untuk mengisi nilai x dan y
    //private member
    void setXY(string a, string b) {
        x = a;
        y = b;
    }
}