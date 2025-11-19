#include<unordered_map>
#include<unordered_set>
#include<string>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int minimumLength(string s) {
        int left=0,right=s.size()-1,len=s.size();
        while(left<right&&s[left]==s[right])
        {
            char c=s[left];
            while(left<=right&&s[left]==c)
                left++;
            while(left<=right&&s[right]==c)
                right--;
        }
        
        return right-left+1;
    }
};