#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        if(s.size()==1&&k==1)
            return true;
        int t=1;    
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
            {
                t++;
            }
            else
            {
                if(t==k)
                    return true;
                t=1;
            }
            
        }
        return t==k;
        
    }
};