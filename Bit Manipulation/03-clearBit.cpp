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

void clearBit(int n, int i) // n is the given number, i is the index
{
    binaryRepresentation(n);
    int mask = ~(1 << i);
    int temp = (n & mask);
    binaryRepresentation(temp);
    // return temp;
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
        clearBit(n, i);
        cout << endl;
    }

    /*
    
        Upon Executing the Above code with the following,
        
        Input:  3
                0 2
                3 4
                5 1

        We got the following,

        Output: 0 : 0 : 0 : 0 :                 // Decimal 0 : Binary Representation 0 : After clearing the 2nd bit the number is still 0 which is represented in decimal form : Binary representation of 0 is 0
                3 : 11 : 1 : 1 :                // Decimal 3 : Binary Representation 11 : After clearing the 1st bit we got 1 which is in decimal form : Binary representation of 1 is 1
                5 : 101 : 4 : 100 :             // Decimal 5 : Binary Representation 101 : After clearing the 0th bit we got 4 which is in decimal representation : Binary Representation of 4 is 100

    */

    return 0;
}