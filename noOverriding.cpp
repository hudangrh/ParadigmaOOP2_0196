#include <iostream>
using namespace std;

class baseClass {
public:
    virtual void perkenalan() final{
        cout << "Hallo saya Function dari baseClass";
    }
};
class derivedClass : public baseClass {
public:
    void perkenalan1() {
        cout << "Hallo saya Function dari derivedClass";
    }
};