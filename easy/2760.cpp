#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {  
        int ans=0,t=0;
        int i=0,n=nums.size();
        while(i<n)
        {
            if(nums[i]>threshold || nums[i]%2)
            {
                i++;
                continue;
            }
                
            int start = i;
            i++;
            while(i<n && nums[i] <= threshold && nums[i]%2!=nums[i-1]%2)
                i++;
            ans = max(ans,i-start);
        }
        return ans;
    }
};