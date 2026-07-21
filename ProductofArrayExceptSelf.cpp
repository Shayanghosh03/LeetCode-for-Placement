// LeetCode - 238. Product of Array Except Self
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int c= 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                c++;
            }
        }
        if(c > 1) {
            vector<int> ans(nums.size(), 0);
            return ans;
        }
        if(c == 0) {
            int mul = 1;
            for(int i = 0; i < nums.size(); i++) {
                mul *= nums[i];
            }
            for(int i = 0; i < nums.size(); i++) {
                nums[i] = mul/nums[i];
            }
            return nums;
        }
        if(c == 1) {
            int mul = 1;
            int k = 0;
            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] != 0) {
                    mul *= nums[i];
                } else if(nums[i] == 0) {
                    k = i;
                }
            }
            vector<int> ans(nums.size(), 0);
            ans[k] = mul;
            return ans;
        }
        return {};
    }
};

// Optimal Solution
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        //Prefix
        for(int i = 1; i < n; i++) {
            ans[i] = ans[i - 1] * nums[i - 1];
        }
        //Suffix
        int suffix = 1;
        for(int i = n - 2; i >= 0; i--) {
            suffix = suffix * nums[i + 1];
            ans[i] = ans[i] * suffix;
        }
        return ans;
    }
};