#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<int> s(102,0);
        for(int i=0;i<nums.size();i++)
        {
            s[nums[i][0]]+=1;
            // 需要在终点后-1
            s[nums[i][1]+1]-=1;
        }
        int cur=0,res=0;
        for(int i=0;i<s.size();i++)
        {
            cur +=s[i];
            if(cur>0)
                res++;
        }
        return res;
    }
};