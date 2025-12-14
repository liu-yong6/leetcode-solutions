#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        // 如何判断是水平梯形
        // 有两个边平行
        long long res=0;
        const int MOD = 1000000007;
        unordered_map<int,int> count;
        for(int i=0;i<points.size();i++)
            count[points[i][1]]++;

        // 直接循环遍历map不方便操作
        // for(auto it=count.begin;it!=count.end();it++)
        // {
        //     int t = it->second;
        // }
        vector<int> num;
        for(auto it=count.begin();it!=count.end();it++)
        {
            num.push_back(it->second);
        }
        // 如何统计数量
        long long sum = 1LL* num[0]*(num[0]-1)/2;
        for(int i=1;i<num.size();i++)
        {
            long long t = 1LL*num[i]*(num[i]-1)/2;
            res +=sum*t;
            sum+=t;
            res = res%MOD;
        }
        return res;
        
        
    }
};