#include<unordered_map>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        long long sum=0,result=0;
        unordered_map<int,int> hash;
        int len =nums.size();
        for(int i=0;i<len;i++)
        {
            hash[nums[i]]++;
            sum+=nums[i];
            if(i<k)
            {
                continue;
            }
            int t=0;
            for (const auto &p : hash) {           
               t+=p.second;
                if(t==k)
                    result=max(result,sum);
                hash[nums[i-k+1]]--;
            }
        }
        return result;
    }
};

int main()
{
    
}