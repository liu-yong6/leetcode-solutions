#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        //和三数之和有同一个问题，最开始我们使用哪个值作为最外层循环
        for (int i = n - 1; i >= 2; i--) {
            int left = 0, right = i - 1;
            while (left < right) {
                if (nums[left] + nums[right] > nums[i]) {
                    // 如果目前left+right>i,则从left到right-1之间和right都能组成三角形
                    ans += right - left;
                    right--;
                } else {
                    left++;
                }
            }
        }
        // 选择中间的数 nums[i] 为固定边，不好界定“两边之和大于第三边”的判断方向
        // 会重复统计 / 遗漏合法组合
        // for(int i=1;i<nums.size();i++)
        // {
        //     int left=0,right=nums.size()-1;
        //     while(left<right)
        //     {
        //         if(nums[left]+nums[i]>nums[right])
        //         {
        //             ans += right - left;
        //             right--;;
        //         }
        //         else 
        //         {
        //             i++;
        //         }
        //     }
        // }
        return ans;

    }
};