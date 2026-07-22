// LeetCode - 1071. Greatest Common Divisor of Strings
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int gcd(int a, int b) {
        while(b != 0) {
            int t = b;
            b = a % b;
            a = t;
        }
        return a;
    } 
    string gcdOfStrings(string str1, string str2) {
        string newStr;
        if(str1 + str2 != str2 + str1) {
            return "";
        }
        int len = gcd(str1.length(), str2.length());
        for(int i = 0; i < len; i++) {
            newStr += str1[i];
        }
        return newStr;
    }
};