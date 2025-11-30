#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int> hash;
        int m = -1;
        for(int i=0;i<nums.size();i++)
        {
            if(hash.find(-nums[i])!=hash.end())
            {
                if(abs(nums[i])>m)
                    m=abs(nums[i]);
            }
            hash[nums[i]]=i;
        }
        return m;
    }
};