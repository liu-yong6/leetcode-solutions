#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        char t;
        int len = s.size();
        for(int i=0;i<len/2;i++)
        {
            t=s[i];
            s[i]=s[len-i-1];
            s[len-i-1]=t;
        }
    }
};