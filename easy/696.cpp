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
        int ans=0,a=1,b=1;
        for(int i=0;i<s.size()-1;i++)
        {
            while((i+a<s.size())&&s[i+a]==s[i])
                a++;
            while((i+a+b<s.size())&&s[i+a+b]==s[i+a])
                b++;
            if(b>=a)
                ans++;
            a=1;
            b=1;
        }
        return ans;
    }
};