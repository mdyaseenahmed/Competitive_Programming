#include<bits/stdc++.h>

using namespace std;

int factorial(int n)
{
    if(n == 0)
        return 1;
    int prevFact = factorial(n-1);
    return n * prevFact;
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
        int res = factorial(n);
        cout << "Factorial of " << n << " is: " << res << endl;
    }

    /*
        Upon executing the above code with the following,
        Input:  3
                3
                5
                9
        
        We got the following,
        Output: Factorial of 3 is: 6
                Factorial of 5 is: 120
                Factorial of 9 is: 362880

    */

    return 0;
}