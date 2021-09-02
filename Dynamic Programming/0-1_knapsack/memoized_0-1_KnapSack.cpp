/* 0-1 Knapsack Problem Top Down DP; (Memoized Approach) */
// Given weights and values of n items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. In other words, given two integer arrays val[0..n-1] and wt[0..n-1] which represent values and weights associated with n items respectively. Also given an integer W which represents knapsack capacity, find out the maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to W. You cannot break an item, either pick the complete item or don’t pick it (0-1 property).

#include<bits/stdc++.h>

using namespace std;

int DP[1000][1000];

void init()
{
    memset(DP, -1, sizeof(DP));
}

int memoizedknapSack(int val[], int weight[], int W, int n)
{
    if(n == 0 || W == 0)
        return 0;

    if(DP[n][W] != -1)
    {
        return DP[n][W];
    }

    if(weight[n-1] <= W)
        return DP[n][W] = max(val[n-1]+memoizedknapSack(val, weight, W-weight[n-1], n-1), memoizedknapSack(val, weight, W, n-1));
    else
        return DP[n][W] = memoizedknapSack(val, weight, W, n-1);
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin >> n;

    int value[n], weight[n];
    int W;

    for(int i = 0; i < n; i++)
    {
        cin >> value[i] >> weight[i];
    }

    cin >> W;

    init();
    int maxProfit = memoizedknapSack(value, weight, W, n);
    cout << "Max Profit: " << maxProfit;

    /*

        Upon Executing the Above code with the Following,
        Input:  3                           // n: Number of Items.
                60  10                      // val[], weight[]
                100 20                      // val[], weight[]
                110 30                      // val[], weight[]
                50                          // W: Capacity of the Knapsack

        We got the following, 
        Output: Max Profit: 210

    */

    return 0;
}