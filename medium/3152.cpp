#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        
        vector<int> s;
        s.resize(nums.size()+1);
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]%2 !=nums[i+1]%2)
                s[i+1] = s[i]+1;
            else
                s[i+1]=0;
        }
        vector<bool> res;
        for(int i=0;i<queries.size();i++)
        {
            if(s[queries[i][1]]-s[queries[i][0]]==(queries[i][1]-queries[i][0]))
                res.push_back(true);
            else
                res.push_back(false);

        }
        return res;
    }
};