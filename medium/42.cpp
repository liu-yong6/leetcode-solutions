#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int left=0,right=height.size()-1;
        int ans=0,pre_max=0,suf_max=0;
        if(height.size()<2)
            return 0;
        while(left<right)
        {
            pre_max = max(pre_max, height[left]);
            suf_max = max(suf_max, height[right]);

            // 接的雨水由最矮的柱子决定，当我们确定前后的最高柱子时，接到的雨水则由前后最矮的柱子决定
            if (pre_max < suf_max) {
                ans += pre_max - height[left];
                left++;
            } else {
                ans += suf_max - height[right];
                right--;
            }         
        }
        return ans;
        
    }
};