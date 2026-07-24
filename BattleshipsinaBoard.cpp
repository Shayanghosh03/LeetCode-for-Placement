// LeetCode - 419. Battleships in a Board
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int c = 0;
        for(int i = 0; i < board.size(); i++) {
            for(int j = 0; j < board[i].size(); j++) {
                if(board[i][j] == 'X') {
                    c++;
                    int t = i+1;
                    while(t < board.size() && board[t][j] == 'X') {
                        board[t][j] = '.';
                        t++;
                    }
                    t = j+1;
                    while(t < board[i].size() && board[i][t] == 'X') {
                        board[i][t] =    '.';
                        t++;
                    }
                    board[i][j] = '.';
                }
            }
        }
        return c;
    }
};