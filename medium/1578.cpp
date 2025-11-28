#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans=0;
        int i=0,n=neededTime.size();
        while(i<n)
        {
            int start=i,m=neededTime[i];
            int sum=neededTime[i];
            i++;
            while(i<n&&colors[i]==colors[i-1])
            {
                sum+=neededTime[i];
                m = max(m,neededTime[i]);
                i++;
            }
            ans+=sum;
            ans-=m;
        }
        return ans;
    }
};