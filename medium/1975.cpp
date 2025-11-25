#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    string makeFancyString(string s) {
        for(int i=0;i<s.size();i++)
        {
            int t=1;
            while((i+t)<s.size()&&s[i+t]==s[i])
            {
                t++;
            }
            if(t>=3)
                s.erase(i+1,t-2);
        }
        return s;
    }
};