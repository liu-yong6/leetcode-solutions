#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    string reverseVowels(string s) {
        int right=s.size()-1,left=0;
        char t;
        unordered_set<char> sear = {'A','E','I','O','U','a','e','i','o','u'};
        while(left<right)
        {
            while(left<s.size()&&!sear.count(s[left]))
                left++;
            while(right>=0&&!sear.count(s[right]))
                right--;
                
            if(left>=right)
                break;
            t=s[left];
            s[left]=s[right];
            s[right]=t;
            left++;
            right--;


        }
        return s;
        
    }
};