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
    int sum;
    for(int i = 0; i < n ; i++)
    {
        sum = 0;
        for(int j = i; j < n; j++)
        {
            sum += Arr[j];
            cout << sum << "\n";
        }
    }

    return 0;
}