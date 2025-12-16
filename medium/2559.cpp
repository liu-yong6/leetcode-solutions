#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> s,res;
        s.resize(words.size()+1);
        string tar = "aeiou";
        for(int i=0;i<words.size();i++)
        {
            int t=words[i].size();
            // string::npos它表示：查找失败时的返回值
            if(tar.find(words[i][0])!= string::npos && tar.find(words[i][t-1])!= string::npos)
                s[i+1]=s[i]+1;
            else
                s[i+1]=s[i];
        
        }
        for(int i=0;i<queries.size();i++)
        {
            res.push_back(s[queries[i][1]+1]-s[queries[i][0]]);
        }
        return res;

    }
};