#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0,right = nums.size()-1;
        int mid = -1;
        while(left<=right)
        {
            int m =(left+right)/2;
            if(nums[m]==target)
            {
                mid=m;
                break;
            }
            else if(nums[m]>target)
                right=m-1;
            else
                left=m+1;
        }
        if(mid==-1)
            return left;
        else
            return mid;
    }
};