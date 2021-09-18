#include<bits/stdc++.h>

using namespace std;

string binaryRepresentation(int n)
{
    string str;
    while(n)
    {
        int rem = n % 2;
        str += to_string(rem);
        n /= 2;
    }
    reverse(str.begin(), str.end());
    return str;
}

int countBits(int n)
{
    int count = 0;
    while(n)
    {
        n &= (n-1);
        count++;
    }
    return count;
}

int countBitsUsingBuiltinType(int n)
{
    return __builtin_popcount(n);
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
        int n;
        cin >> n;
        cout << "Binary Representation Of " << n << " is " << binaryRepresentation(n) << " & Number of Set Bits in " << n << " : " << countBits(n) << endl;
        cout << "Binary Representation Of " << n << " is " << binaryRepresentation(n) << " & Number of Set Bits in " << n << " Using Built in function is : " << countBitsUsingBuiltinType(n) << endl;
    }

    /*
    
        Upon Executing the Above code with the following,
        Input:  3
                3
                19
                32

        We got the following,
        Output: Binary Representation Of 3 is 11 & Number of Set Bits in 3 : 2
                Binary Representation Of 3 is 11 & Number of Set Bits in 3 Using Built in function is : 2
                Binary Representation Of 19 is 10011 & Number of Set Bits in 19 : 3
                Binary Representation Of 19 is 10011 & Number of Set Bits in 19 Using Built in function is : 3
                Binary Representation Of 32 is 100000 & Number of Set Bits in 32 : 1
                Binary Representation Of 32 is 100000 & Number of Set Bits in 32 Using Built in function is : 1


    */

    return 0;
}