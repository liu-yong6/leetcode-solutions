#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

class Solution {
public:
    int countHomogenous(string s) {
        const int MOD = 1000000000+7;
        long long ans=0,t=1;
        int n=s.size(),i=0;
        while(i<n)
        {
            //最后一个单独的字符无法统计
            int start = i;
            // 注意i++的顺序
            i++;
            while(i<n && s[i]==s[i-1])
            {
                i++;
            }
            long len = i-start;
            ans +=(len*(len+1)/2)%MOD;
            
            // int n=s.size(),i=1;
            // while(i<n)
            // {
            //     //最后一个单独的字符无法统计
            //     int start = i;
            //     while(s[i]==s[i-1])
            //     {
            //         i++;
            //         t++;
            //     }
            //     ans+=(1LL*t*(t+1)/2);
            //     ans = ans%MOD;
            //     i++;
            //     t=1;
            // }
        }
        
        return ans;
    }
};