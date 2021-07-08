/*
    Maximum Subarray Sum
*/

#include<bits/stdc++.h>

using namespace std;

int maximumSubarraySum(int Arr[], int n)
{
    int sum = 0, maxSum = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            for(int k = i; k <= j; k++)
            {
                sum += Arr[k];
            }
            maxSum = max(sum, maxSum);
            sum = 0;
        }
    }
    return maxSum;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n,t;
    cin >> t;
    
    while(t--)
    {
        cin >> n;
        int Arr[n];

        for(int i = 0; i < n; i++)
        {
            cin >> Arr[i];
        }
        
        int res = maximumSubarraySum(Arr,n);
        cout << res;
    }   

    return 0;
}