#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int ans=0,t=1,start;
        int i=0,n=word.size();
        while(i<n)
        {
            while(i<n && word[i]!='a')
                i++;
            start=i;
            i++;
            while(i<n&&word[i]>=word[i-1])
            {    
                if(word[i]>word[i-1])
                    t++;
                i++;  
            }
            if(t==5)    
                ans = max(ans,i-start);
            t=1;
        }
        return ans;
    }
};