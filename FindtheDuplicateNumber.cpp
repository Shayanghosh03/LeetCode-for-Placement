// LeetCode - 287. Find the Duplicate Number
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int a[100000] = {0};    
        for(int i = 0; i < nums.size(); i++) {
            a[nums[i] - 1]++;
        }
        for(int i = 0; i < nums.size(); i++) {
            if(a[i] > 1) {
                return i + 1;
            }
        }
        return 0;
    }
};

// Optimal Solution
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0], fast = nums[0];
        do {
            slow = nums[slow]; //+1
            fast = nums[nums[fast]]; //+2
        } while(slow != fast);

        slow = nums[0];
        while(slow != fast) {
            slow = nums[slow]; //+1
            fast = nums[fast]; //+1
        }
        return slow;
    }
};