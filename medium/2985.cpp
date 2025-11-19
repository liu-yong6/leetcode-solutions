#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int res=0,left=0;
        unordered_map<int,int> count;
        for(int right=0;right<nums.size();right++)
        {
            count[nums[right]]++;
            while(count[nums[right]]>k)
            {
                count[nums[left]]--;
                left++;
            }
            res = max(res,right-left+1);
        }
        return res;
    }
};