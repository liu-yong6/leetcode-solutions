#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,res=0;
        unordered_map<int,int> count;
        for(int right=0;right<nums.size();right++)
        {
            count[nums[right]]++;
            while(count[0]>k)
            {
                count[nums[left]]--;
                left++;
            }
            res = max(res,right-left+1);
        }
        return res;
    }
};