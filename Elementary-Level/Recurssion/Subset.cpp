/*
[LEETCODE 78] https://leetcode.com/problems/subsets/description/

---> Question : Given an integer array nums of unique elements, return all possible
subsets
(the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

Example 2:

Input: nums = [0]
Output: [[],[0]]

*/
#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans){
        if(index>=nums.size()) {
            ans.push_back(output);
            return;
        }

        // exclude
        solve(nums, output,index+1, ans);

        //include
        int element = nums[index];
        output.push_back(element);
        solve(nums, output, index+1, ans);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int index=0;
        vector<vector<int>> ans;
        vector<int> output;
        solve(nums, output, index, ans);
        return ans;
    }