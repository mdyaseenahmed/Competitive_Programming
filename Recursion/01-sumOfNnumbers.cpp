#include<bits/stdc++.h>

using namespace std;

int sumOfNnumbers(int n)
{
    if(n == 0)
        return 0;
    int prevSum = sumOfNnumbers(n-1);
    return n + prevSum;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin >> n;

    int sum = sumOfNnumbers(n);
    cout << "Sum: " << sum;

    /*
        Upon Executing the Above code with the following,
        Input: 5
        
        We got the following,
        Output: 15
    */

    return 0;
}