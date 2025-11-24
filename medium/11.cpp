#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int len = height.size();
        int left=0,right=len-1;
        int ans = min(height[left],height[right])*(right-left);

        // 双指针如何移动？
        //为什么直接比较两边的柱子呢？
        // 首先水的高度由最矮的柱子决定，我们移动最高的柱子，页面仍然由最矮的柱子决定，但宽度减少了
        // 那我们移动最矮的柱子，三种情况，比原来矮或是一样，则最大依然不变
        // 如果比原来高，则我们便获得了更多的雨水

        while(left<right)
        {
            if(height[left]<height[right])
                left++;
            else
                right--;

            ans = max(ans,min(height[left],height[right])*(right-left));
        }

        return ans;
        
    }
};