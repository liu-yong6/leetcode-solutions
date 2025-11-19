#include<unordered_map>
#include<unordered_set>
#include<string>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left=0,right=s.size()-1;
        while(left<right)
        {
            if(!isalnum(s[left]))
                left++;
            else if(!isalnum(s[right]))
            {
                right--;
            }
            else if(tolower(s[left])==tolower(s[right]))
            {
                left++;
                right--;
            }
            else
                return false;
        }
        return true;
        
    }
};