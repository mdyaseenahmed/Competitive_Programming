// Minimum number of increment-other operations to make all array elements equal.

// We are given an array consisting of n elements. At each operation you can select any one element and increase rest of n-1 elements by 1. You have to make all elements equal performing such operation as many times you wish. Find the minimum number of operations needed for this.
// Examples:
// Input : arr[] = {1, 2, 3}
// Output : Minimum Operation = 3
// Explanation : 
// operation | increased elements | after increment
//     1     |    1, 2            | 2, 3, 3
//     2     |    1, 2            | 3, 4, 3
//     3     |    1, 3            | 4, 4, 4

// Input : arr[] = {4, 3, 4}
// Output : Minimum Operation = 2
// Explanation : 
// operation | increased elements | after increment
//      1    |    1, 2           | 5, 4, 4
//      2    |    2, 3           | 5, 5, 5

#include<bits/stdc++.h>

using namespace std;

int smaller(vector<int> arr)
{
    int smallerEle = INT_MAX;
    for(int i = 0; i < arr.size(); i++)
        if(arr[i] < smallerEle)
            smallerEle = arr[i];
    return smallerEle;
}

int ArraySum(vector<int> arr)
{
    int sum = 0;
    for(int i = 0; i < arr.size(); i++)
        sum += arr[i];
    return sum;
}

int getMinimumOperations(vector<int> arr)
{
    int smallerEle = smaller(arr);
    int sum = ArraySum(arr);
    int n = arr.size();
    int minOperations = sum - (n * smallerEle);
    return minOperations;

}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int t,n,temp;
    cin >> t;

    while(t--)
    {
       cin >> n;
       vector<int> arr;
       for(int i = 0; i < n; i++)
       {
           cin >> temp;
           arr.push_back(temp);
        //    cout << arr[i] << "\t";
       } 
       int res = getMinimumOperations(arr);
       cout << "Minimum Operations Required: " << res << endl;
    }

    /*
        Upon Executing the Above code with the following,
        Input:  2
                3
                1 2 3
                5
                5 6 8 8 5

        We got the Following,
        
        Output: 
                Minimum Operations Required: 3
                Minimum Operations Required: 7



    */

    return 0;
}
