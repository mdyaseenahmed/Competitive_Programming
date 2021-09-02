#include<bits/stdc++.h>

using namespace std;

long long int constantSpaceFibonacci(long long int n)
{
    long long int a, b, c;
    a = 0;
    b = 1;

    if(n <= 1)
        return n;

    for(int i = 2; i <= n; i++)
    {
        c = (a + b) % 1000000007;
        a = b;
        b = c;
    }
    return c;
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

        long long int res = constantSpaceFibonacci(n);
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