#include<bits/stdc++.h>

using namespace std;

int fibonacci(int n)
{
    if(n <= 1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int t,n;

    cin >> t;

    while(t--)
    {
        cin >> n;
        int res = fibonacci(n);
        cout << "Fib of " << n << " is: " << res << endl; 

    }

    /*
        Upon executing the above code with the following,
        Input:  3
                3
                5
                9
        
        We got the following,
        Output: Fib of 3 is: 2
                Fib of 5 is: 5
                Fib of 9 is: 34

    */

    return 0;
}