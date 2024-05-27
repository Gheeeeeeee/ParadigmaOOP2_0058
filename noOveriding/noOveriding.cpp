#include <iostream>
using namespace std;

class baseClass {
public:
    virtual void perkenalan() final {
        cout << "halo saya function dari base class";
    }
};

class derivedclass : public baseClass {
public:
    void perkenalan() {
        cout << " hello sayaa function dari derived Class";
    }
};


int main()
{
    derivedclass a;
    a.perkenalan();

    return 0;
}
