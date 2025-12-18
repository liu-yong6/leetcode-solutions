#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> rec;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="C")
                rec.pop_back();
            else if(operations[i]=="D")
            {
                // int t = rec.end();
                rec.push_back(2*rec.back());
            }
            else if (operations[i] == "+") {
                int n = rec.size();
                rec.push_back(rec[n - 1] + rec[n - 2]);
            }
            else {
            //    字符串转换为整数
                rec.push_back(stoi(operations[i]));
            }
        }
        int sum = 0;
        for (int x : rec) 
            sum += x;
        return sum;
    }
};