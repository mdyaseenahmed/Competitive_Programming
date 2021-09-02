#include<bits/stdc++.h>

using namespace std;

long long int bottomUpFibonacci(long long int n)
{
    long long int Fib[n+1];
    Fib[0] = 0;
    Fib[1] = 1;

    for(long long int i = 2; i <= n; i++)
        Fib[i] = (Fib[i-1] + Fib[i-2]) % 1000000007;        // Here, mod by (1000000007) is done to avoid the overflow. (When Both Fib[i-1] and Fib[i-2] are very long & when both added then overflow may occur so to avoid overflow mod operations has been carried out).

    return Fib[n];
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int t;
    cin >> t;

    while(t--)
    {    
        long long int n;
        cin >> n;

        long long int res = bottomUpFibonacci(n);

        cout << "Fibonacci of " << n << " is  " << res << endl;    
    }

    /*
    
        Upon Executing the Above Code with the following,
        Input:  3
                9
                5
                656

        Output: Fibonacci of 9 is  34
                Fibonacci of 5 is  5
                Fibonacci of 656 is  823693831

    */

    return 0;
}