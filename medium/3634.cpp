#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int left=0,right = nums.size()-1;
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            // 1LL * 是 C++ 中的一个常见写法，用于将整数提升为 long long 类型
            while(nums[i]>1LL*nums[left]*k)
            {
                left++;
            }
            ans = max(ans,i-left+1);
        }
        
        return nums.size()-ans;
    }
};