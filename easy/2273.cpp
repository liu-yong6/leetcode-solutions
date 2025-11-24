#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        //?如何判断是字母异味词,使用函数
        // sort(words.begin(), words.end());
        for(int i=0;i<words.size()-1;i++)
        {
            //?怎么删除
            if(isdiff(words[i],words[i+1]))
            {
                words.erase(words.begin()+i+1);
                i--;
            }
                
        }
        return words;
    }

    // ?如何判断是否相等函数
    bool isdiff(string a,string b)
    {
        if(a.size()!=b.size())
            return false;
        unordered_map<char,int> count;
        for(int i=0;i<a.size();i++)
        {
            count[a[i]]++;
            count[b[i]]--;
        }
        for(auto &p:count)
        {
            if(p.second != 0)
                return false;
        }
        return true;
    }
};