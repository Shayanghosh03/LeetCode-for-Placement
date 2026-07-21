// LeetCode - 1010. Pairs of Songs With Total Durations Divisible by 60
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> v(60, 0);

        for (int t : time) {
            v[t % 60]++;
        }

        long long ans = 0;

        for (int i = 1; i <= 29; i++) {
            ans += 1LL * v[i] * v[60 - i];
        }

        ans += 1LL * v[0] * (v[0] - 1) / 2;
        ans += 1LL * v[30] * (v[30] - 1) / 2;

        return (int)ans;
    }
};

// 1LL is a long long.
// Since one operand is long long, C++ automatically promotes the entire expression to long long.
// The multiplication is done in 64-bit arithmetic.