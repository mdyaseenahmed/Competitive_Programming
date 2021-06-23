#include<bits/stdc++.h>
#include<climits>

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
    int maxEle = INT_MIN;
    int minEle = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        maxEle = max(Arr[i],maxEle);
        minEle = min(Arr[i],minEle);    
    }
    cout << "Max: " << maxEle << "\nMin: " << minEle;
   
    /*
        Input:  7
                8 -2 0 78 6 10 -99
        Output: Max: 78
                Min: -99
    */

    return 0;
}
