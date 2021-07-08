#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    string str = "Hello";
    str.clear();

    if(str.empty())
        cout << "String 1 is empty" << endl;

    string str2 = "world";
    if(!str2.empty())
        cout << "String 2 is not empty.!";

    return 0;
}