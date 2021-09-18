#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    if(n <= 1)
        return false;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0) 
            return false;
    return true;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int t, n;
    cin >> t;

    while(t--)
    {
        cin >> n;
        isPrime(n) ? cout << n << " is a Prime Number" << endl : cout << n << " is Not a Prime Number" << endl; 
    }

    /*
    
        Upon Executing the above code with the following, 
        Input:  3
                2
                5
                9

        We got the following,
        Output: 2 is a Prime Number
                5 is a Prime Number
                9 is Not a Prime Number

    */

    return 0;
}