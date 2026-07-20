// LeetCode - 509. Fibonacci Number
#include<iostream>
using namespace std;
class Solution {
public:
    int fib(int n) {
        int a = 0, b = 1, i = 2;
        if(n == 0) {
            return 0;
        }
        if(n == 1) {
            return 1;
        }
        while(i < n) {
            int temp = b;
            b = a + b;
            a = temp;
            i++;
        }
        return a + b;
    }
};