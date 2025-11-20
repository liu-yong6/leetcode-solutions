#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
using namespace std;
class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        //为什么排序不影响，因为如果i>j,也可以是j>i,只要保证枚举时一个在左，一个在右即可
        long long res = 0;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            //lower_bound 在nums[i+1]到末尾，查找num[i]+nums[left]>lower的第一个
            int left = lower_bound(nums.begin() + i + 1, nums.end(), lower - nums[i]) - nums.begin();
            //upper_bound 在nums[i+1]到末尾，查找num[i]+nums[left]<upper的第一个
            int right = upper_bound(nums.begin() + i + 1, nums.end(), upper - nums[i]) - nums.begin();
            //且right必然大于left
            res += right - left;
        }
        return res;
    }
};