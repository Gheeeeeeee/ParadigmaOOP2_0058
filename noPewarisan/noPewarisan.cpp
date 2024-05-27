#include <iostream>
using namespace std;

class baseClass final{
public:
    virtual void perkenalan()  {
        cout << "halo saya function dari base class";
    }
};
// final digunakan agar tidak terjadi pewarisan
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