// LeetCode - 2405. Optimal Partition of String
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int partitionString(string s) {
        int c = 0;
        int a[26] = {0};
        for(int i = 0; i < s.length(); i++) {
            a[s[i] - 97]++;
            if(a[s[i] - 97] == 2) {
                c++;
                i--;
                for(int j = 0; j < 26; j++) {
                    a[j] = 0;
                }
            }
        }
        return c+1;
    }
};