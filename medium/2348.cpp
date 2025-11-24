#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        
        long long ans=0,temp=0;
        for(int i=0;i<nums.size();i++)
        {

            if(nums[i]==0)
            {
                temp++;
            }
            else
            {
                // 连续子序列的计算公式
                ans+=(temp*(temp+1)/2);
                temp=0;
            }
        }
        // 最后不为0会导致最后的序列无法统计
        ans+=(temp*(temp+1)/2);
        return ans;
    }
};