/* Binary To Decimal Conversion. */

#include<bits/stdc++.h>

using namespace std;

/*
        Given n: 1010
                 
                 +---------------+
                 | 1 | 0 | 1 | 0 |
                 +--------------+
                 | 8 | 4 | 2 | 1 |
                 +--------------+
                 | 8 | 0 | 2 | 0 |
                 +--------------+

                 8 + 2 = 10

            So, in the Program below we have initialized the base value as 1, then in each iteration we increment it or multiply by 2 so it will be incremented by 2, so the sequence will be 2, 4, 8, 16, 32, 64 and so on.

*/

void binaryToDecimal(int n)
{
    int last_digit;
    int decimalEquivalent = 0;
    int base = 1;                       // 2^(0) = 1, Initially the Base is 1 & then 2, 4, 8, 16 & so on.    
    while(n)
    {
        last_digit = n % 10;
        n /= 10;
        decimalEquivalent += last_digit * base;

        base *= 2;                      
    }
    cout << decimalEquivalent <<endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int t, n;

    cin >> t;

    while(t--)
    {
        cin >> n;
        binaryToDecimal(n);
    }

    return 0;
}