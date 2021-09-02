/* 0-1 Knapsack Problem Bottom Down DP; (Tabulation Approach) */
// Given weights and values of n items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. In other words, given two integer arrays val[0..n-1] and wt[0..n-1] which represent values and weights associated with n items respectively. Also given an integer W which represents knapsack capacity, find out the maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to W. You cannot break an item, either pick the complete item or don’t pick it (0-1 property).

#include<bits/stdc++.h>

using namespace std;

int topDownknapSack(int val[], int weight[], int W, int n)
{
    int DP[n+1][W+1];
    // Here, the base condition of the Recursion Becomes the initialization.
    for(int i = 0; i <= n; i++)             // Initialization
        for (int j = 0; j <= W; j++)
            if(i == 0 || j == 0)
                DP[i][j] = 0;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= W; j++)
        {
            if(weight[i-1] <= j)
            {
                DP[i][j] = max(val[i-1]+DP[i-1][j-weight[i-1]], DP[i-1][j]);
            }
            else if(weight[i-1] > W)
            {
                DP[i][j] = DP[i-1][j];
            }
        }
    }
    return DP[n][W];
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

    int maxProfit = topDownknapSack(value, weight, W, n);
    cout << "Max Profit: " << maxProfit;

    /*

        Upon Executing the Above code with the Following,
        Input:  3                           // n: Number of Items.
                60  10                      // val[], weight[]
                100 20                      // val[], weight[]
                100 30                      // val[], weight[]
                50                          // W: Capacity of the Knapsack

        We got the following, 
        Output: Max Profit: 200

    */

    return 0;
}