// LeetCode - 125. Valid Palindrome
#include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string g;
        for(int i = 0; i < s.size(); i++) {
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')) {
                if(s[i] >= 'A' && s[i] <= 'Z') {
                    s[i] += 32;
                }
                g += s[i];
            }
        }
        for(int i = 0; i < g.size()/2; i++) {
            if(g[i] != g[g.size()-1-i]) {
                return false;
            }
        }
        return true;
    }
};

// Optimal Solution
class Solution {
public:
    bool valid(char ch) {
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return 1;
        }
        return 0;
    }
    char tolowerCase(char ch) {
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            return ch;
        } else {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }
    bool checkPalindrome(string s) {
        int st = 0;
        int end = s.length() - 1;
        while(st < end) {
            if(s[st] != s[end]) {
                return 0;
            } else {
                st++;
                end--;
            }
        }
        return 1;
    }
    bool isPalindrome(string s) {
        string temp = "";
        for(int i = 0; i < s.length(); i++) {
            if(valid(s[i])) {
                temp.push_back(s[i]);
            }
        }
        for(int i = 0; i < temp.length(); i++) {
            temp[i] = tolowerCase(temp[i]);
        }
        return checkPalindrome(temp);
    }
};