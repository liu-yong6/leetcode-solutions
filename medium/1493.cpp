#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans=0,left=0,count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                count++;
            while(count>1)
            {
                if(nums[left]==0)
                    count--;
                left++;
            }
            ans = max(ans,i-left);
        }
        return ans;
    }
};