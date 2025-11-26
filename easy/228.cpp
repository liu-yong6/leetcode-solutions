#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if(nums.size()==0)
            return res;
        int t=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-nums[i-1]==1)
            {
                t++;
            }
            else
            {
                if(t>1)
                {
                    res.push_back(to_string(nums[i - t]) + "->" + to_string(nums[i - 1]));
                    t=1;
                }
                else
                    res.push_back(to_string(nums[i-t]));
            }
        }
        if (t > 1)
            res.push_back(to_string(nums[nums.size() - t]) + "->" + to_string(nums.back()));
        else
            res.push_back(to_string(nums.back()));
        

        return res;
    }
};