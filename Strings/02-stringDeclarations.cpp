#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    string str = "Hello";
    string str1(5,'n');

    cout << str << endl;    // Hello
    cout << str1;           // nnnnn

    return 0;
}