#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int left =0,right=n-1;
        int mid = -1;
        while(left<right)
        {
            int m=(left+right)/2;
            if(nums[m]==target)
            {
                mid = m;
                break;
            }
            else if(nums[m]>target)
                right--;
            else
                left++;
        }
        return mid;
    }
};