// LeetCode - 118. Pascal's Triangle
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> temp(1, 1);
        ans.push_back(temp);
        
        if(numRows == 1) {
            return ans;
        }

        temp.push_back(1);
        ans.push_back(temp);

        if(numRows == 2) {
            return ans;
        }

        for(int i = 3; i <= numRows; i++) {
            vector<int> v;
            v.push_back(1);
            for(int j = 1; j < i - 1; j++) {
                int sum = ans[i-2][j-1] + ans[i-2][j];
                v.push_back(sum);
            }
            v.push_back(1);
            ans.push_back(v);
        }
        return ans;
    }
};