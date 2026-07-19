// LeetCode - 88. Merge Sorted Array
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        int a = 0;
        int b = 0;
        
        while(a < m && b < n) {
            if(nums1[a] <= nums2[b]) {
                ans.push_back(nums1[a]);
                a++;
            } else {
                ans.push_back(nums2[b]);
                b++;
            }
        }
        while(a < m) {
            ans.push_back(nums1[a]);
            a++;
        }
        while(b < n) {
            ans.push_back(nums2[b]);
            b++;
        }

        for(int i = 0; i < m+n; i++) {
            nums1[i] = ans[i];
        }
    }
};