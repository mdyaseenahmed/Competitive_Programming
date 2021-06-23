#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    // Pre Increment: It First increments value & then assigns / uses the values.

    int a = 10;
    int b;
    
    b = ++a;
    cout << "a: " << a << " b: " << b << endl;  // a: 11 b: 11
    
    // Post Increment: It First Assingns / Use the value then increments it.
    int c = 10;
    int d;

    d = c++;
    cout << "c: " << c << " d: " << d << endl;  // c: 11 d: 10

    // Exapmles:

    // (1)
    // int i = 1;
    // i = i++ + ++i;
    // cout << "i : " << i << endl;   // i : 4

    // (2)
    // int i = 1;
    // int j = 1;
    // int k;

    // k = i + j + i++ + j++ + ++i + ++j;

    // cout << "i: " << i << " j: " << j << " k: " << k << endl;   // i: 3 j: 3 k: 10

    // (3)
    // int i = 1;
    // int j = 2;
    // int k;

    // k = i + j + i++ + j++ + ++i + ++j;

    // cout << "i: " << i << " j: " << j << " k: " << k << endl;   //i: 3 j: 4 k: 13

    // (4)
    // int i = 0;

    // i = i++ - --i + ++i - i--;
    // cout << "i: " << i << endl; // i: 0
    
    // (5)
    // int i = 1, j = 2, k = 3;
    // int m = i-- - j-- - k--;
    
    // cout << "i: " << i << " j: " << j << " k: " << k << " m: " << m << endl;    // i: 0 j: 1 k: 2 m: -4
    
    return 0;
}