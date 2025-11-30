#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            // 访问 hash[key] 时，用了不存在的 key，会自动插入 0
            if(hash.find(target-nums[i])!= hash.end())
                return {i,hash[target-nums[i]]};
            hash[nums[i]]=i;
        }
        return {0,0};
    }
};