#include<bits/stdc++.h>

using namespace std;

long long int result[100000000];

void init()
{
    memset(result, -1, sizeof(result));
    // -1 indicates that the subproblem result needs to be computed.
}

long long int topDownFibonacci(long long int n)
{
    if(result[n] == -1)
    {
        if(n <= 1)
            result[n] = n;

        else
            result[n] = (topDownFibonacci(n-1) + topDownFibonacci(n-2)) % 1000000007;
    }
    return result[n];
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
        
        init();
        long long int res = topDownFibonacci(n);

        cout << "Fibonacci of " << n << "th Term is " << res << endl;
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