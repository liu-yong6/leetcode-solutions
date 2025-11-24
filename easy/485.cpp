#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int t=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                t++;
            }
            else
            {
                ans = max(t,ans);
                t=0;
            }

        }
        return ans;
        
        
        
        
    }
};