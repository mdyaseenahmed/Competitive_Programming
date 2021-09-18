#include<bits/stdc++.h>

using namespace std;

void printPrimes(int n)
{
    bool primes[n+1];
    memset(primes, true, sizeof(primes));
    primes[0] = 0;
    primes[1] = 0;

    for(int i = 2; i <= n; i++)
    {
        if(primes[i] == true)
            for(int j = i * 2; j <= n; j+=i)
                primes[j] = false;
    }

    for(int i = 2; i <= n; i++)
        if(primes[i] == true)
            cout << i << " ";
}   

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin >> n;

    printPrimes(n); 

    /*

        Upon Executing the above code with the following,
        Input: 20

        We got the following,
        Output: 2 3 5 7 11 13 17 19         // Prime Numbers till 20

    */

    return 0;
}