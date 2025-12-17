#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> person(1001,0);
        for(int i=0;i<trips.size();i++)
        {
            person[trips[i][1]]+=trips[i][0];
            person[trips[i][2]]-=trips[i][0];
        }
        int cur=0;
        for(int i=0;i<person.size();i++)
        {
            cur+=person[i];
            if(cur>capacity)
                return false;
        }
        return true;
        
    }
};