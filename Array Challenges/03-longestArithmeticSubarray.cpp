/*
    Problem Definition: An Arithmetic array is an array that contains atleast two integers and the differences between consecutive integers are equal.
    For Example: [9,10], [3,3,3], and [9,7,5,3] are arithmetic arrays, while [1,3,3,7], [2,1,2] and [1,2,4] are not arithmetic arrays.

    Problem Statement: Sarasvati has an array of N non-negative integres. The i-th interger of the array is Ai. She wants to choose a contiguous arithmetic subarray from her array that has the maximum length. Please help her to determine the length of the longest contiguous arithmetic subarray.
    Input: The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing the Integer N. The second line contains N integers. The i-th integer is Ai.
    Output: For each test case output one line containing case #x: y, where x is the test case number(starting from 1) and y is the length of the longest contiguous arithmetic subarray.

    Sample Test case:
    Input:  7
            10 7 4 6 8 10 11
    Output: 4   
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int t,n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int Arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> Arr[i];
        }

        int res = 2;
        int pd = Arr[1] - Arr[0];   // pd holds the common difference of the previous elements.

        int j = 2;
        int indexLen = 2;   // indexLen stores the length of the current arithmetic sequence.

        while(j < n)
        {
            if(pd == Arr[j] - Arr[j-1])
            {
                indexLen++;
            }
            else
            {   
                pd = Arr[j] - Arr[j-1];
                indexLen = 2;   
            }
            res = max(indexLen, res);
            j++;
        }   
        cout << res << endl;
    }

    /*
        Upon executing the above code with the following input: 
        Input:  3
                7
                10 7 4 6 8 10 11
                5
                3 3 3 1 2
                2
                9 10
        
        We get the following,
        Output: 4
                3
                2

    */

    return 0;
}