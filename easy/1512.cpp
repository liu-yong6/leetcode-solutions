#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans=0,n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<n)
        {
            int t=1;
            i++;
            while(i<n&&nums[i-1]==nums[i])
            {
                t++;
                i++;
            }     
            ans+=(t*(t-1)/2);
        }
        return ans;
    }
};