// LeetCode - 933. Number of Recent Calls
#include<bits/stdc++.h>
using namespace std;
class RecentCounter {
public:
    vector<int> v;
    RecentCounter() {
        
    }
    
    int ping(int t) {
       v.push_back(t);
       reverse(v.begin(), v.end());
       while(v[v.size()-1] < v[0]-3000) {
        v.pop_back();
       }
       reverse(v.begin(), v.end());
       return v.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */