#include <iostream>
using namespace std;

class A 
{
    int num;
    char a;
    char b;
    char c;
};

class B
{
    char a;
    int num;
    char b;
    char c;
};

class C
{
    char a;
    char b;
    int num;
    char c;
    double d;
};

class D
{
    char a;
    char b;
    char c;
    int num;
    double d;
};

class E 
{
    char a;
    int num;
    char b;
    double d;
    char c;
};

class F
{

};

int main()
{
    A objA;
    B objB;
    C objC;
    D objD;
    E objE;
    F objF;
    cout << "Size of A object: " << sizeof(objA) << " bytes" << endl;
    cout << "Size of B object: " << sizeof(objB) << " bytes" << endl;
    cout << "Size of C object: " << sizeof(objC) << " bytes" << endl;
    cout << "Size of D object: " << sizeof(objD) << " bytes" << endl;
    cout << "Size of E object: " << sizeof(objE) << " bytes" << endl;
    cout << "Size of F object: " << sizeof(objF) << " bytes" << endl;
    return 0;
}

/*
NOTE: The standard does not allow objects (and classes thereof) of size 0, since that would make it possible for two distinct objects to have the same memory address. That's why even empty classes must have a size of (at least) 1.
*/