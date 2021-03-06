#include <bits/stdc++.h>

using namespace std;

void binaryRepresentation(int n)
{
    string res;
    int temp = n;
    if(n == 0)
        cout << temp << " : " << temp << " : ";
    else
    {
        while(n)
        {
            int rem = n % 2;
            res += to_string(rem);
            n /= 2;
        }
        reverse(res.begin(), res.end());
        cout << temp << " : " << res << " : ";
    }
}

bool getBit(int n, int i) // n is the given number, i is the index
{
    binaryRepresentation(n);
    return (n & (1 << i));
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    int n, i;
    while (t--)
    {
        cin >> n;
        cin >> i;
        cout << getBit(n, i) << endl;
    }

    /*
    
        Upon Executing the Above code with the following,
        
        Input:  3
                0 2
                3 0
                5 2

        We got the following,

        Output: 0 : 0 : 0                   // Decimal 0 : Binary Representation of 0 : 2nd Bit of Zero in Binary Representation
                3 : 11 : 1
                5 : 101 : 1

    */

    return 0;
}