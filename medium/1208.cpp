#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int ans=0,left=0,m=0;
        for(int i=0;i<s.size();i++)
        {
            m+=abs(s[i]-t[i]);
            while(m>maxCost)
            {
                m-=abs(s[left]-t[left]);
                left++;
            }
            ans=max(ans,i-left+1);
            
        }
        return ans;
    }
};