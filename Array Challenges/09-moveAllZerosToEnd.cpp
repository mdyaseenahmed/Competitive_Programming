/*
    283. Move Zeroes: Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

    Note that you must do this in-place without making a copy of the array.

    Example 1:

        Input: nums = [0,1,0,3,12]
        Output: [1,3,12,0,0]

    Example 2:

        Input: nums = [0]
        Output: [0]
*/

#include<bits/stdc++.h>

using namespace std;

void moveZeros(int Arr[], int n)
{
    int j = 0;
    for(int i = 0; i < n; i++)
        if(Arr[i] != 0)
            Arr[j++] = Arr[i];
    for(; j < n; j++)
        Arr[j] = 0;
}

void printArray(int Arr[], int n)
{
    for(int i = 0; i < n; i++)
        cout << Arr[i] << " ";
    cout << endl;
}

int main()
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
        int Arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> Arr[i];
        }

        moveZeros(Arr, n);
        printArray(Arr, n);
    }

    /*
        Upon Executing the above code with the followin input: 
        2                   // Number of test cases
        5                   // Size of 1st Array
        0 1 0 3 12          // Elements of 1st Array
        1                   // Size of 2nd Array
        0                   // Elements of 2nd Array

        We get the following output,
        1 3 12 0 0 
        0 

    */

    return 0;
}