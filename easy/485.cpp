#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int left=0;
        while(left<nums.size())
        {
            while(left<nums.size()&&nums[left]!=1)
                left++;
            int t=0;
            while(left<nums.size()&&nums[left]==1)
            {
                left++;
                t++;
            }
            ans = max(ans,t);
        }
        return ans;
        
        
        
        
    }
};