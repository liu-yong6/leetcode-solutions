#include<unordered_map>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

class RecentCounter {
public:
    queue<int> q;
    RecentCounter() {
        int num=0;
    }
    
    int ping(int t) {
        q.push(t);
        while(!q.empty()&&q.front()<(t-3000))
        {
            q.pop();
        }
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */