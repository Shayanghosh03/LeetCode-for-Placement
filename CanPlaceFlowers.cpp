// LeetCode - 605. Can Place Flowers
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n == 0) {
            return true;
        }

        int len = flowerbed.size();
        for(int i = 0; i < len; i++) {
            if(flowerbed[i] == 0) {
                bool leftadj = (i == 0) || (flowerbed[i-1] == 0);
                bool rightadj = (i == len-1) || (flowerbed[i+1] == 0);

                if(leftadj && rightadj) {
                    flowerbed[i] = 1;
                    n--;
                    if(n == 0) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};