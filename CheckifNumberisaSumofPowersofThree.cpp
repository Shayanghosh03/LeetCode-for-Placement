// LeetCode - 1780. Check if Number is a Sum of Powers of Three
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkPowersOfThree(int n) {
        int c = 1;
        while(c <= n) {
            c *= 3;
        }
        c /= 3;
        while(c > 0 && n > 0) {
            if(c <= n) {
                n -= c;
            }
            c /= 3; 
        }
        if(n == 0) {
            return true;
        }
        return false;
    }
};