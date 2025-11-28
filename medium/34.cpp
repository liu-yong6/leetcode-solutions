#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int left=0,right = nums.size()-1;
        int mid=-1;
        while(left<=right)
        {
            int m = (left+right)/2;
            if(nums[m]==target)
            {
                mid = m;
                break;
            }
            else if(nums[m]>target)
                right=m-1;
            else
                left=m+1;
        }
        if (mid == -1) return {-1, -1};   // 没找到 target
        int l=mid,r=mid;
        while(l >= 0 && nums[l]==target)
            l--;
        while(r < nums.size() && nums[r]==target)
            r++;
        return {l+1,r-1};
        // int left=0,right = nums.size()-1;
        // int mid=0;




        // while(left<=right)
        // {
        //     mid = (left+right)/2;
        //     if(nums[mid]==target)
        //         break;
        //     if(nums[mid]>target)
        //         right=mid-1;
        //     else
        //         left=mid+1;
        // }
        // int l=mid,r=mid;
        // if(nums[mid]==target)
        // {
        //     while(l >= 0 && nums[l]==target)
        //         l--;
        //     while(r < nums.size() && nums[r]==target)
        //         r++;
        // }
        // return {l,r};

    }
};