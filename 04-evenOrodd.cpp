#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int num;

    cin >> num;

    if(num % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
    
    return 0;
}