#include<bits/stdc++.h>
using namespace std;
class CustomStack {
public:
    vector<int> v;
    int n;

    int min(int a, int b) {
        if(a < b) {
            return a;
        }
        return b;
    }

    CustomStack(int maxSize) {
        n = maxSize;
    }
    
    void push(int x) {
        if(v.size() < n) {
            v.push_back(x);
        }
    }
    
    int pop() {
        if(v.size() > 0) {
            int temp = v[v.size() - 1];
            v.pop_back();
            return temp;
        }
        return -1;
        
    }
    
    void increment(int k, int val) {
        for(int i = 0; i < min(k, v.size()); i++) {
            v[i] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */