/* Decimal To Binary Conversion. */

#include<bits/stdc++.h>

using namespace std;

void BrutedecimalToBinary(int n)
{
    int temp[32] = {0};
    int i = 0;
    while(n > 0)
    {
        temp[i++] = n % 2;
        n /= 2;
    }
    for(int j = i-1; j >= 0; j--)
    {
        cout << temp[j];
    }
    cout << endl;
}

string strdecimalToBinary(int n)
{
    string res;
    while(n > 0)
    {
        int rem = n % 2;
        n /= 2;
        res += to_string(rem);
    }
    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int t, n;
    string res;
    cin >> t;
    char ca;
    cout << typeid(ca).name() << endl;                          // c for character is the type of variable 'ca'

    while(t--)
    {
        cin >> n;
        BrutedecimalToBinary(n);
        res = strdecimalToBinary(n);
        cout << res << endl;
        // cout << typeid(res).name() << endl; 
    }
    // cout << sizeof(int);
    // cout << sizeof(string);

    /*
    
        Upon Executing the Above Code with the following,
        Input:  3
                4
                10
                17

        We got the following,
        Output: c
                100
                100
                1010
                1010
                10001
                10001

    */

    return 0;
}