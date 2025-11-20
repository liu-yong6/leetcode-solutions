#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
using namespace std;
class Solution {
public:
    bool judgeSquareSum(int c) {
        long long left=0,right=sqrt(c)+1;
        while(left<=right)
        {
            if((pow(left,2)+pow(right,2))>c)           
                right--;          
            else
                left++;
            if((pow(left,2)+pow(right,2))==c)
                return true;
        }
        return false;   
    }
};