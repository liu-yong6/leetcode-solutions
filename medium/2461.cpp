#include<unordered_map>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long result=0,sum=0;
        int len = nums.size();
        unordered_map<int,int> count;
        for(int i=0;i<len;i++)
        {
            count[nums[i]]++;
            sum+=nums[i];
            if(i>=k)
            {
                
                sum-=nums[i-k];
                count[nums[i-k]]--;
                if(count[nums[i-k]]==0)
                    count.erase(nums[i-k]);
            }
            if(count.size()==k)
            {
                result = max(result,sum);
            }
        }
        return result;
        
    }
};