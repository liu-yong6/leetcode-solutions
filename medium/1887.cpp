#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0,i=0,n=nums.size();
        int t=0;
        while(i<n)
        {
            int start=i;
            i++;

            while(i<n&&nums[i]==nums[i-1])
                i++;
            ans += t*(i-start);
            t++;
        }
        return ans;
    }
};