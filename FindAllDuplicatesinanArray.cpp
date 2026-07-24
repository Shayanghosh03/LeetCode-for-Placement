// LeetCode - 442. Find All Duplicates in an Array
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        if(nums.empty()) {
            return ans;
        }
        
        unordered_map<int, int> m;
        for(int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }

        for(auto it : m) {
            if(it.second == 2) {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};