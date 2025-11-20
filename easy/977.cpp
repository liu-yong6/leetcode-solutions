#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int left=0,right = nums.size()-1,len=nums.size()-1;
        while(left<right)
        {
            if(pow(nums[left],2)>=pow(nums[right],2))
            {
                res[len]=pow(nums[left],2);
                len--;
                left++;
            }
            else
            {
                res[len]=pow(nums[right],2);
                len--;
                right--;
            }
        }
        if(left==right)
            res[0]= pow(nums[right],2);
        return res;
    }
};