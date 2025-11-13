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
        while(nums[right]>nums[left]*k)
        {
            if(nums[left+1]-nums[left]>nums[right]-nums[right-1])
                left++;
            else
                right--;
            ans++;
        }
        return ans;
    }
};