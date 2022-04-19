#include "RightAngled.h"
#include <iostream>
using namespace std;

int main()
{
    Triangle k;
    RightAngled l;

    cout << endl;
    l.Read();
    cout << endl;
    l.Display();
    cout << endl;
    cin >> k;

    cout << "perimeter = " << k.perimeter() << endl;
    cout << "angle A :" << k.AngleA() << endl;
    cout << "angle B :" << k.AngleB() << endl;
    cout << "angle C :" << k.AngleC() << endl;

    cout << "count = " << Triangle::Count() << endl;
    cout << "count = " << RightAngled::Count() << endl;
    cout << "count = " << Object::Count() << endl;

    return 0;
}