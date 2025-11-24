#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    int maxPower(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            int t=1;
            while(i<s.size()&&s[i+1]==s[i])
            {
                t++;
                i++;
            }
            ans = max(t,ans);
        }
        return ans;

        
    }
};