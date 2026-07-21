// Leet Code - 724. Find Pivot Index
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftSum, rightSum;
        int sum = 0;

        leftSum.push_back(sum);
        for(int i = 0; i < n - 1; i++) {
            sum += nums[i];
            leftSum.push_back(sum);
        }

        sum += nums[n - 1];
        sum -= nums[0];

        rightSum.push_back(sum);
        for(int i = 1; i < n; i++) {
            sum -= nums[i];
            rightSum.push_back(sum);
        }

        for(int i = 0; i < n; i++) {
            if(leftSum[i] == rightSum[i]) {
                return i;
            }
        }
        return -1;
    }
};