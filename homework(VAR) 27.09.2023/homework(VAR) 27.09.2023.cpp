#include <iostream>
#include "var.h"

using namespace std;

int main() {
    setlocale(0, "");


    var a = 15;
    var b = "Hello";
    var c = 7.8;
    var d = "50";

    d += a;
    cout << d << endl;

    a += d;
    cout << a << endl;
    
    // str + int
    b = d + a;
    cout << b << endl << endl;

    // int + str
    b = a + d;
    cout << b << endl << endl;
   

    if (a == b)
        cout << "Равно" << endl;
    else
        cout << "Не равно" << endl;


    a = "Microsfot";
    cout << a << endl << endl;

    b = "Windows";
    cout << b << endl << endl;

    c = a + b;
    cout << c << endl << endl;

    c = a * b;
    cout << c << endl;
    
    c = a / b;
    cout << c << endl;

    a *= b;
    cout << a << endl;

    b /= a;
    cout << b << endl;

    return 0;
}

