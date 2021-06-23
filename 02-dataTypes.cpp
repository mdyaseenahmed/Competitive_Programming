#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a;  // Variable Declaration
    a = 12; // Initialization

    cout << "Size of Int is " << sizeof(a) << endl; // Size of Int is 4

    float b;
    cout << "Size of Float is " << sizeof(b) << endl;   // Size of Float is 4

    double c;
    cout << "Size of Double is " << sizeof(c) << endl;  // Size of Double is 8
    
    char d;
    cout << "Size of Char is " << sizeof(d) << endl; // Size of Char is 1

    bool e;
    cout << "Size of Bool is " << sizeof(d) << endl;    // Size of Bool is 1

    short int si;
    cout << "Size of Short Int is " << sizeof(si) << endl;    // Size of Short Int is 2
    
    long int li;
    cout << "Size of Long Int is " << sizeof(li) << endl;    // Size of Long Int is 8

    return 0;
}