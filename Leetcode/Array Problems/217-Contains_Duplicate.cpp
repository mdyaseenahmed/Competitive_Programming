/*
    217. Contains Duplicate: Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct. (Easy Problem) 

    Example 1:
    
    Input: nums = [1,2,3,1]
    Output: true

    Example 2: 

    Input: nums = [1,2,3,4]
    Output: false

    Example 3:

    Input: nums = [1,1,1,3,3,4,3,2,4,2]
    Output: true


    Constraints:

    1 <= nums.length <= 105
    -109 <= nums[i] <= 109
*/

#include<bits/stdc++.h>

using namespace std;

bool containsDuplicate(vector<int>& nums)
{
    unordered_map<int,int> freq;

    for(int i = 0; i < nums.size(); i++)
    {
        freq[nums[i]]++;
    }

    for(auto i:freq)
    {
        if(i.second >= 2)
            return true;
    }
    return false;
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
        vector<int> nums;
        cin >> n;

        for(int i = 0; i < n; i++)
        {
            cin >> ele;
            nums.push_back(ele);
        }

        if(containsDuplicate(nums))
            cout << "true\n";
        else    
            cout << "false\n";
    }
    

    /*
        Upon executing the above code with,
        Input: 
                3                       // Number of test cases
                4                       // Size of 1st Array
                1 2 3 1                 // Elements of 1st Array
                4
                1 2 3 4
                10
                1 1 1 3 3 4 3 2 4 2
        
        we get the following,
        Output: 
                true
                false
                true
    */

    return 0;
}