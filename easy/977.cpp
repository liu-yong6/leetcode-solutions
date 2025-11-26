#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        vector<int> count;
        int left=0,right = nums.size()-1,len=nums.size()-1;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
                t++;
            else
            {
                count.push_back(t);
                t=1;
            }
        }
        count.push_back(t);
        for(int i=0;i<count.size()-1;i++)
        {
            ans+=min(count[i],count[i+1]);
        }
        
        return res;
    }
};