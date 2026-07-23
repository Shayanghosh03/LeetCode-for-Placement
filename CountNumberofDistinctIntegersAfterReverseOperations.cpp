// LeetCode - 2442. Count Number of Distinct Integers After Reverse Operations
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int> x;
        for(int i = 0; i < nums.size(); i++) {
            x.insert(nums[i]);
        }
        for(int i = 0; i < nums.size(); i++) {
            int reverse = 0;
            while(nums[i] > 0) {
                int remainder = nums[i] % 10;
                reverse = reverse * 10 + remainder;
                nums[i] = nums[i] / 10;
            }
            x.insert(reverse);
        }
        return x.size();
    }
};