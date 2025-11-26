#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans=0;
        int t=2;
        for(int i=2;i<nums.size();i++)
        {  
            if(nums[i]==(nums[i-1]+nums[i-2]))
                t++;
            else
            {
                t=2;
            }
            ans = max(ans,t);
        }
        
        return ans;
    }
};