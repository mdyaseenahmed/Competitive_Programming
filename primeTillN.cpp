#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int num, n = 2;

    cin >> num;

    while(n < num)
    {
        int div = 2;
        while(div < n)
        {
            if(n % div == 0)
            {
                n += 1;
            }
            else
            {
                div += 1;
            } 
        }
        cout << n << " ";
        n += 1;
    }
}