#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int div=2,n=8;

    cin >> n;

    if(n <= 0)
    {
        cout << "Not a Prime";
        exit(0);
    }

    if(n == 1 || n == 2)
    {
        cout << "Prime";
        exit(0);
    }    

    else
        while(div < n)
        {
            if(n % div == 0)
            {
                cout << "Not a Prime";
                exit(0);
            }
            else
                div += 1;
        }
        cout << "Prime";
    return 0;
}
