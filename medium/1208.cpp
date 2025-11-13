#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int ans=0;
        for(int i=maxCost;i>=0;i--)
        {
            for(int left=0;left<s.size()-maxCost-1;i++)
            {
                int count=0;
                for(int j=0;j<i;j++)
                {
                    count+=abs(s[left+j]-t[left+j]);
                }
                if(count==maxCost)
                    ans=max(i,ans);
            }
        }
        return ans;
    }
};