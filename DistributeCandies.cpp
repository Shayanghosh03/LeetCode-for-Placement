// LeetCode - 575. Distribute Candies
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> st;
        for(int candy : candyType) {
            st.insert(candy);
        }
        int dist = st.size();
        int eat = candyType.size() / 2;

        return min(dist, eat);
    }
};