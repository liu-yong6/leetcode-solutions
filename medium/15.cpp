#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        int len = nums.size();
        for(int i=0;i<len-2;i++)
        {
            if(i>0&&nums[i]==nums[i-1])
                continue;
            int left = i+1,right=len-1;
            while(left<right)
            {
                int k=nums[i]+nums[left]+nums[right];
                if(k==0)
                {
                    res.push_back({nums[i], nums[left], nums[right]});
                    while(left<right&&nums[left]==nums[left+1])
                        left++;
                    while(left<right&&nums[right]==nums[right-1])
                        right--;
                    left++;
                    right--;
                }
                else if(k>0)
                    right--;
                else
                    left++;

            }
            
        }
        return res;
    }
};