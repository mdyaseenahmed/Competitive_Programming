/*
    26. Remove Duplicates from Sorted Array: Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. (Easy Problem) 

    Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

    Return k after placing the final result in the first k slots of nums.

    Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.

    Example 1:

    Input: nums = [1,1,2]
    Output: 2, nums = [1,2,_]
    Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
    It does not matter what you leave beyond the returned k (hence they are underscores).

    Example 2:

    Input: nums = [0,0,1,1,1,2,2,3,3,4]
    Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
    Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
    It does not matter what you leave beyond the returned k (hence they are underscores).

*/

#include<bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int>& nums)
{
    int i,j=0;
    if(nums.size() == 0)
    {
        return j;
    }
    for(int i = 0; i < nums.size()-1; i++)
        if(nums[i] != nums[i+1])
            nums[j++] = nums[i];
    nums[j++] = nums[nums.size()-1];
    return j;
}

void printArray(vector<int>& nums, int k)
{
    for(int i = 0; i < k; i++)
        cout << nums[i] << "\t";
    cout << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n,t,ele;
    cin >> t;

    while(t--)
    {
        cin >> n;
        vector<int> nums;

        for(int i = 0; i < n; i++)
        {
            cin >> ele;
            nums.push_back(ele);
        }

        int k = removeDuplicates(nums);
        printArray(nums,k);
    }

    /*
        Upon executing the above code with,
        Input: 
                4                       // Number of test cases
                4                       // Size of 1st Array
                1 3 3 4                 // Elements of 1st Array
                4
                1 2 2 4
                10
                1 1 1 2 2 3 3 3 4 4
                42
                1 3 4 5 6 12 13 17 19 22 23 25 27 28 28 35 36 37 39 43 46 48 54 59 62 63 65 68 68 70 70 72 79 82 83 92 92 93 95 96 96 100

        we get the following,
        Output:
               1	3	4	
               1	2	4	
               1	2	3	4	
               1	3	4	5	6	12	13	17	19	22	23	25	27	28	35	36	37	39	43	46	48	54	59	62	63	65	68	70	72	79	82	83	92	93	95	96	100	
    */

    return 0;
}
