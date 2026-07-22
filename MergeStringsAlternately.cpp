// LeetCode - 1768. Merge Strings Alternately
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = min(word1.length(), word2.length());
        string newStr;
        for(int i = 0; i < n; i++) {
            newStr += word1[i];
            newStr += word2[i];
        }
        for(int i = n; i < word1.length(); i++) {
            newStr += word1[i];
        }
        for(int i = n; i < word2.length(); i++) {
            newStr += word2[i];
        }
        return newStr;
    }
};