#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

class NumArray {

    vector<int> s;
public:
    NumArray(vector<int>& nums) {
        s.resize(nums.size()+1);
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            // sum+=;
            s[i+1] = nums[i]+s[i];

        }
        
    }
    
    int sumRange(int left, int right) {
        return s[right+1]-s[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */