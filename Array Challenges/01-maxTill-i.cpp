/*
Max till i

Input: n = 6
        +-----------------------+
    Arr | 1 | 0 | 5 | 4 | 6 | 8 |
        +-----------------------+
Index:(i) 0   1   2   3   4   5        
          
Output:   1   1   5   5   6   8
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin >> n;
    int Arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }

    int mx=INT_MIN;

    // int maxArray[n];

    for(int i = 0; i < n; i++)
    {
        mx = max(mx,Arr[i]);
        // maxArray[i] = mx;
        cout << mx << "\t";
    }

    return 0;
}