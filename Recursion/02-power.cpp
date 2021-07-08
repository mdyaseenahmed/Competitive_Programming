#include<bits/stdc++.h>

using namespace std;

int power(int n, int p)
{
    if(p == 0)
        return 1;
    int prevPower = power(n, p-1);
    return n * prevPower;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n, p;

    cin >> n >> p;
    int res = power(n,p);
    cout << "Power(" << n << ", " << p << ") = " << res;

    /*
        Upon executing the above code with the following,
        Input: 4 3

        We got the following,
        Output: Power(4, 3) = 64
    */

    return 0;
}