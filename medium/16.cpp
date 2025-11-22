#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        vector<int> t;
        sort(nums.begin(),nums.end());
        int m=INT_MAX,ans=0;
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i>0&&nums[i]==nums[i-1])
                continue;
            int left=i+1,right=nums.size()-1;
            while(left<right)
            {
                int t = nums[i]+nums[left]+nums[right];
                if(t==target)
                    return target;
                if(t>target)
                {
                    if(t - target < m)
                    {
                        m=t-target;
                        ans=t;
                    }
                    right--;
                }
                else
                {
                    if(target - t < m)
                    {
                        m=target-t;
                        ans=t;
                    }
                    left++;        
                }
            }

        }
        return ans;

    }
};