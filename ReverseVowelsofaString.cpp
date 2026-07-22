// LeetCode - 345. Reverse Vowels of a String
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isVowel(char &chr) {
        if(chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u' || chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U') {
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int n = s.length();
        int i = 0; 
        int j = n - 1;

        while(i < j) {
            if(!isVowel(s[i])) {
                i++;
            } else if(!isVowel(s[j])) {
                j--;
            } else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};