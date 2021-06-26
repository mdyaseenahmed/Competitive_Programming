/*
    27. Remove Element: Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The relative order of the elements may be changed. (Easy Problem) 

    Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

    Return k after placing the final result in the first k slots of nums.

    Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.

    Example 1:

    Input: nums = [3,2,2,3], val = 3
    Output: 2, nums = [2,2,_,_]
    Explanation: Your function should return k = 2, with the first two elements of nums being 2.
    It does not matter what you leave beyond the returned k (hence they are underscores).

    Example 2:

    Input: nums = [0,1,2,2,3,0,4,2], val = 2
    Output: 5, nums = [0,1,4,0,3,_,_,_]
    Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.
    Note that the five elements can be returned in any order.
    It does not matter what you leave beyond the returned k (hence they are underscores).

*/

#include<bits/stdc++.h>

using namespace std;

int removeElement(vector<int>& nums, int val)
{
    int i = 0, j = 0;
    if(nums.size() == 0)
    {
        return j;
    }
    for(; i < nums.size(); i++)
    {
        if(nums[i] != val)
            nums[j++] = nums[i];
    }
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

    int t,ele,n,val;
    
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
        cin >> val;
        int res = removeElement(nums, val);
        printArray(nums, res);
    }

    /*
        Upon executing the above code with,
        Input: 
                3               // Number of test cases
                4               // Size of 1st Array
                1 3 3 4         // Elements of 1st Array
                3               // val to be removed from 1st array
                4
                1 2 2 4
                1
                10
                1 1 1 2 2 3 3 3 4 4
                4

        we get the following,
        Output:
               1	4	
               2	2	4	
               1	1	1	2	2	3	3	3		
    */

    return 0;
}