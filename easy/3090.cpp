#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int maximumLengthSubstring(string s) {
        int ans=0,left=0;
        unordered_map<char,int> count;
        for(int i=0;i<s.size();i++)
        {
            count[s[i]]++;
            while(count[s[i]]>2)
            {
                count[s[left]]--;
                left++;
            }
            ans = max(ans,i-left+1);
        }
        return ans;
    }
};