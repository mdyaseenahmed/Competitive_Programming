/*

    * Problem URL: https://leetcode.com/problems/subsets/
    * 78. Subsets: Given an integer array nums of unique elements, return all possible subsets (the power set). The solution set must not contain duplicate subsets. Return the solution in any order.(Medium Problem)
    * 
    * Example 1:

        Input: nums = [1,2,3]
        Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

    * Example 2:

        Input: nums = [0]
        Output: [[],[0]]

    * Constraints:

        1 <= nums.length <= 10
        -10 <= nums[i] <= 10
        All the numbers of nums are unique.
*/

#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> all_subsets;
void generate_Subsets(vector<int>& tempSubset, int i, vector<int> &nums)
{
    if(i == nums.size())
    {
        all_subsets.push_back(tempSubset);
        return ;
    }
        
    // Without including the ith Element
    generate_Subsets(tempSubset, i+1, nums);
        
    // With Including ith Element
    tempSubset.push_back(nums[i]);
    generate_Subsets(tempSubset, i+1, nums);
    tempSubset.pop_back();          // Backtracking step
}
    
vector<vector<int>> subsets(vector<int>& nums) 
{
    vector<int> temp;
    generate_Subsets(temp, 0, nums);
    return all_subsets;
}

void printArray(vector<vector<int> > Arr)
{
    for(int i = 0; i < Arr.size(); i++)
    {
        for(int j = 0; j < Arr[i].size(); j++)
            cout << Arr[i][j] << " ";
        cout << "\n";
    }
        
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
        vector<int> nums(n);
        for(int i = 0; i < n; i++)
            cin >> nums[i];
        vector<vector<int> > allSubsets = subsets(nums);
        printArray(allSubsets);
    }

    /*

        Upon Executing the above code with the following,
        
        Input:  1
                3
                1 2 3

        We got the following,

        Output: 
                3 
                2 
                2 3 
                1 
                1 3 
                1 2 
                1 2 3 

    */

    return 0;
}