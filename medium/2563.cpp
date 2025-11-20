#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
using namespace std;
class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long res=0,left;
        for(int i=1;i<nums.size();i++)
        {
            left=0;
            while(left<i)
            {
                int t=nums[i]+nums[left];
                if(t<=upper&&t>=lower)
                    res++;
                left++;
            }
        }
        return res;
    }
};