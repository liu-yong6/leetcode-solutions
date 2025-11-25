#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int ans=1,t=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
                t++;
            else
            {
                ans = max(ans,t);
                t=1;
            }
        }
        ans = max(ans,t);
        return ans;
    }
};