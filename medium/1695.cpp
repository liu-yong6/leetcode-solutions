#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        int left=0,temp=0,res=0;
        unordered_map<int,int> count;
        for(int right=0;right<nums.size();right++)
        {
            count[nums[right]]++;
            temp+=nums[right];
            while(count[nums[right]]>1)
            {
                count[nums[left]]--;
                temp-=nums[left];
                left++;
            }
            res=max(temp,res);
        }
        return res;
    }
};