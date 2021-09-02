/* 0-1 Knapsack Problem (Recursive Approach) */
// Given weights and values of n items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. In other words, given two integer arrays val[0..n-1] and wt[0..n-1] which represent values and weights associated with n items respectively. Also given an integer W which represents knapsack capacity, find out the maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to W. You cannot break an item, either pick the complete item or don’t pick it (0-1 property).

#include<bits/stdc++.h>

using namespace std;

int knapSack(int val[], int weight[], int W, int n)
{
    if(n == 0 || W == 0)                    // Base Condition
        return 0;
    else if(weight[n-1] <= W)               // If the current Item weight is less than the capacity of the knapsack. Then we have 2 choices either to include it or not to include. 
        return max(val[n-1]+knapSack(val, weight, W-weight[n-1], n-1), knapSack(val, weight, W, n-1));
    else if(weight[n-1] > W)                // If the current Item weight is greater than the capacity of the knapsack. Then we cannot take or include the current Item or we simply reduce the number of elements to n-1;
        return knapSack(val, weight, W, n-1);
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

    int maxProfit = knapSack(value, weight, W, n);
    cout << "Max Profit: " << maxProfit;

    /*

        Upon Executing the above with the following:

        Input:  3
                60  10
                100 20
                120 30
                50


        We got the Following:

        Output:  Max Profit: 220

    */

    return 0;
}