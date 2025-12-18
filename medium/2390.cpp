#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    string removeStars(string s) {
        string r;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='*')
            {
                r.push_back(s[i]);
            }
            else if(!r.empty())
                r.pop_back();
        }
        
        return r;
    }
};