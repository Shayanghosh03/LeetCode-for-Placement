// LeetCode - 1465. Maximum Area of a Piece of Cake After Horizontal and Vertical Cuts
// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        long long max1, max2;
        sort(hc.begin(), hc.end());
        sort(vc.begin(), vc.end());

        max1 = hc[0];
        for(int i = 1; i < hc.size(); i++) {
            if(max1 < hc[i] - hc[i - 1]) {
                max1 = hc[i] - hc[i - 1];
            }
        }
        if(max1 < h - hc[hc.size() - 1]) {
            max1 = h - hc[hc.size() - 1];
        }

        max2 = vc[0];
        for(int i = 1; i < vc.size(); i++) {
            if(max2 < vc[i] - vc[i - 1]) {
                max2 = vc[i] - vc[i - 1];
            }
        }
        if(max2 < w - vc[vc.size() - 1]) {
            max2 = w - vc[vc.size() - 1];
        }

        const int MOD = 1e9 + 7;

        return (max1 * max2) % MOD;
    }
};