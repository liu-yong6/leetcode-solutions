#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    bool checkZeroOnes(string s) {
        int a=0,b=0;
        int len = s.size();
        int t0=0,t1=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='1')
            {
                t1++;
                t0=0;
            }
            else
            {
                t0++;
                t1=0;
            }
            a = max(a,t0);
            b = max(b,t1);
        }
        
        return b>a;
        
    }
};