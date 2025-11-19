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
        while(left<right)
        {
            if(s[left]==s[right])
            {
                while(left+1<=right&&s[left+1]==s[left])
                    left++;
                while(right>=0&&s[right-1]==s[right])
                    right--;
                left++;
                right--;
            }
            else
                break;
        }
        if(right-left<=0)
            return 0;
        else
            return right-left+1;
    }
};