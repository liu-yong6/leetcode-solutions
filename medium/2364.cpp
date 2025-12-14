#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int> count;
        long long res = 0,sum=0;
        long long len = nums.size();
        for(int i=0;i<len;i++)
        {
            int t = nums[i];
            if(count[t-i]>0)
                sum+=count[t-i];
            count[t-i]++;
        }
        // len也需要定义为long long
        res = 1LL*(len*(len-1))/2;
        res-=sum;
        return res;
    }
};