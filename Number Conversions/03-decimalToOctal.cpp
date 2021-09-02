/* Decimal To Octal Conversion */

#include<bits/stdc++.h>

using namespace std;

void decimalToOctal(int n)
{
    vector<int> res;
    int last_digit;

    while(n)
    {
        last_digit = n % 8;
        n /= 8;
        res.push_back(last_digit);
    }
    reverse(res.begin(), res.end());
    for(auto i:res)
        cout << i;
    cout << endl;
}

int main(int argc, char const *argv[])
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
        decimalToOctal(n);
    }

    /*

        Upon Executing the Above code with the following, 
        Input:  2
                16
                33

        We got the following,    
        Output: 20
                41

    */
    
    return 0;
}
