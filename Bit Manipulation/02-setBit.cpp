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

void setBit(int n, int i) // n is the given number, i is the index
{
    binaryRepresentation(n);
    int temp = (n | (1 << i));
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
        setBit(n, i);
        cout << endl;
    }

    /*
    
        Upon Executing the Above code with the following,
        
        Input:  3
                0 2
                3 4
                5 1

        We got the following,

        Output: 0 : 0 : 4 : 100 :               // Decimal 0 : Binary Representation 0 : After setting the 2nd bit we got 4 in decimal representation : Decimal representation of 4 is 100
                3 : 11 : 19 : 10011 :           // Decimal 3 : Binary Representation 11 : After setting the 4th bit we got 19 in decimal representation : Decimal representation of 19 is 10011
                5 : 101 : 7 : 111 : 

    */

    return 0;
}