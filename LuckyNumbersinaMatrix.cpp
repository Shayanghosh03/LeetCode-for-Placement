// LeetCode - 1380. Lucky Numbers in a Matrix
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> ans;
        vector<int> c;
        vector<int> r; 
        for(int i = 0; i < matrix.size(); i++) {
            int min = INT_MAX;
            for(int j = 0; j < matrix[i].size(); j++) {
                if(matrix[i][j] < min) {
                    min = matrix[i][j];
                }
            }
            r.push_back(min);
        }

        for(int i = 0; i < matrix[0].size(); i++) {
            int max = INT_MIN;
            for(int j = 0; j < matrix.size(); j++) {
                if(matrix[j][i] > max) {
                    max = matrix[j][i];
                }
            }
            c.push_back(max);
        }

        for(int i = 0; i < r.size(); i++) {
            for(int j = 0; j < c.size(); j++) {
                if(r[i] == c[j]) {
                    ans.push_back(r[i]);
                    break;
                }
            }
        }
        return ans;

    }
};