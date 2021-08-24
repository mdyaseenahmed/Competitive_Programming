#include<bits/stdc++.h>

using namespace std;

/*
    Kadane's Algorithm: It finds the sum of contiguous subarray with maximum sum.
*/

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
            cin >> Arr[i];
        
        int currSum = 0;
        int maxSum = INT_MIN;

        for(int i = 0; i < n; i++)
        {
            currSum += Arr[i];
            if(maxSum < currSum)
            {
                maxSum = currSum;
            }

            if(currSum < 0)
                currSum = 0;
        }
        cout << "Sum of contiguous subarray with maximum sum: " << maxSum << endl;
    }

    /*
        Upon Executing the above code with the following,
        Input:  2
                5
                1 2 3 -2 5
                4
                -1 -2 -3 -4

        We got the following,
        Output: Sum of contiguous subarray with maximum sum: 9
                Sum of contiguous subarray with maximum sum: -1

    */

    return 0;
}