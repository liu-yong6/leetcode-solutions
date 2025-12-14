#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int sum=0,res=0;
        vector<int> s;
        s.resize(nums.size()+1);
        for(int i=0;i<nums.size();i++)
        {
            s[i+1]=s[i]+nums[i];
            res+=s[i+1]-s[max(0,i-nums[i])];
        }
        return res;

    }
};