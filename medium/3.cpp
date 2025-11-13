#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int sum=0,left=0;
        unordered_map<char,int> count;
        
        for(int i=0;i<s.size();i++)
        {
            count[s[i]]++;
            while(count[s[i]]>1)
            {
                count[s[left]]--;
                left++;
            }
            sum = max(sum,i-left+1);
        }
        return sum;
    }
};