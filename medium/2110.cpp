#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long ans=0,t=1;

        for(int i=1;i<prices.size();i++){
            if(prices[i]-prices[i-1]==-1)
            {
                t++;
            }
            else
            {
                ans+=(t*(t+1)/2);
                t=1;
            }
        }
        ans+=(t*(t+1)/2);
        
        return ans;
        
    }
};