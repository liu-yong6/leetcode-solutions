#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    int countBinarySubstrings(string s) {
        int ans=0,t=1;
        vector<int> count;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
                t++;
            else
            {
                count.push_back(t);
                t=1;
            }
        }
        count.push_back(t);
        for(int i=0;i<count.size()-1;i++)
        {
            ans+=min(count[i],count[i+1]);
        }
        
        return ans;
    }
};