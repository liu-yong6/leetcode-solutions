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
        int n=nums.size(),i=0;
        while(i<n)
        {
            int start=i;
            while(i<n-1&&nums[i]+1==nums[i+1])
                i++;
            string temp = to_string(nums[start]);
            if(start<i)
            {
                temp.append("->");
                temp.append(to_string(nums[i]));
            }
            res.push_back(temp);
            i++;
        }
        return res;
    }
};