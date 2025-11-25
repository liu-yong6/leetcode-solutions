#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    int numSub(string s) {
        // 常量取余
        const int MOD = 1000000007;
        long long ans=0;
        long long t=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                t++;
            }
            else
            {
                //大数乘法溢出
                ans+=(1LL * t*(t+1)/2);
                t=0;
            }
        }
        ans+=(t*(t+1)/2);
        ans = ans % MOD;
        return ans;
    }
};