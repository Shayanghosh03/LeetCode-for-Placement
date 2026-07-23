// LeetCode - 763. Partition Labels
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> partitionLabels(string s) {
        int a[26] = {0};
        for(int i = 0; i < s.size(); i++) {
            a[s[i] - 97]++;
        }
        vector<int> ans;
        int c = 0;
        int b[26] = {0};
        for(int i = 0; i < s.size(); i++) {
            b[s[i] - 97]++;
            c++;
            bool flag = true;
            for(int j = 0; j < 26; j++) {
                if((a[j] != b[j]) && (b[j] != 0)) {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                ans.push_back(c);
                c = 0;
            }
        }
        return ans;
    }
};