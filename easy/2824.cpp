#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
using namespace std;
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int res=0,left,right=nums.size()-1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            left=0;
            while(left<i)
            {
                if((nums[left]+nums[i])<target)
                {
                    res++;  
                }
                left++;
            }
        }
        return res;
        
    }
};