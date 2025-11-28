#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        //  如何判断设置位

        // 如何判断能否有序
        // 首先进行分组，由于交换只能在相邻元素之间

        int n = nums.size();
        int i=0,pre_max = INT_MIN;
        while(i<n)
        {
            int start=i;
            int cur_min = nums[i];
            int cur_max = nums[i];
            i++; 
            while(i<n && popcount(nums[i])==popcount(nums[i-1]))
            {
                cur_min = min(cur_min,nums[i]);
                cur_max = max(cur_max,nums[i]);
                i++;
            }
            if(cur_min<pre_max)
                return false;
            pre_max = cur_max;        
        }
        return true;
    }

    int popcount(int x)
    {
        int n=0;
        while(x)
        {
            x &= (x-1);
            n++;
        }
        return n;
    }
};