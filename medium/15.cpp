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
        //对整个数组进行排序
        sort(nums.begin(),nums.end());
        int len = nums.size();
        // 边界为len-2，因为最右边已经为len-1，到len-1会导致重复
        for(int i=0;i<len-2;i++)
        {
            // 首先对i进行去重
            if(i>0&&nums[i]==nums[i-1])
                continue;
            int left = i+1,right=len-1;
            // 使用双指针
            while(left<right)
            {
                int k=nums[i]+nums[left]+nums[right];
                // 条件符合时加入返回数组
                if(k==0)
                {
                    res.push_back({nums[i], nums[left], nums[right]});
                    // 使用while循环去重
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