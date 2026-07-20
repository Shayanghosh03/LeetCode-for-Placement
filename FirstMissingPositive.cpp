// LeetCode - 41. First Missing Positive
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> v;
        v.push_back(nums[0]);
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != v[v.size() - 1]) {
                v.push_back(nums[i]);
            }
        }
        long i = 0;
        while(i < v.size() && v[i] < 1) {
            i++;
        }
        long ans = 1;
        while(i < v.size() && v[i] == ans) {
            ans++;
            i++;
        }
        return ans;
    }
};