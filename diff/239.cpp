#include<unordered_map>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans(nums.size()-k+1);
        deque<int> q;
        for(int i=0;i<nums.size();i++)
        {
            // 如果当前是最大，则清空队列，如果有比目前值小的，也都清出队列
            while(!q.empty()&&nums[q.back()]<=nums[i])
                q.pop_back();
            q.push_back(i);
            int left = i-k+1;
            
            if(q.front()<left)
                q.pop_front();

            if(left>=0)
                ans[left]=nums[q.front()];
        }
        return ans;
    }
};