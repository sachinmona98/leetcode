// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

// A subarray is a contiguous part of an array.

 

// Example 1:

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: [4,-1,2,1] has the largest sum = 6.
// Example 2:

// Input: nums = [1]
// Output: 1
// Example 3:

// Input: nums = [5,4,-1,7,8]
// Output: 23
 
 int maxSubArray(vector<int>& nums) {
        
        int global_max = nums[0];
        int curr_max = nums[0];

        for(int i = 1; i < nums.size(); i++){
            curr_max = max(curr_max + nums[i], nums[i]);
            global_max = max(global_max, curr_max);
        }
        return global_max;
    }