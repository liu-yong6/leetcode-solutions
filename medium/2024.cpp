#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
       int left=0,res=0;
       unordered_map<char,int> count;

       for(int right=0;right<answerKey.size();right++)
       {
            count[answerKey[right]]++;
            while(count['T']>k&&count['F']>k)
            {
                count[answerKey[left]]--;
                left++;
            }
            res=max(res,right-left+1);
       } 
        return res;
    }
};