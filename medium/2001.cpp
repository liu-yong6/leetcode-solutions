#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        // 二维数组排序？不需要使用二维数组
        long long ans=0;
        unordered_map<long double,int> hash;
        for(int i=0;i<rectangles.size();i++)
        {
            long double t = (rectangles[i][1]*1.0)/rectangles[i][0];
            if(hash.find(t)!=hash.end())
            {
                ans+=hash[t];    
            }
            hash[t]++;
        }

        // 使用
        // 辗转相除法实现求两个整数的最大公约数
        // map<pair<int, int>, long long> map;
        // 不用unordered_map是因为umap没有更具pair提供默认的哈希函数
        // int gcd(int a, int b) {
        //     while (b != 0) {
        //         int r = a % b;
        //         a = b;
        //         b = r;
        //     }
        //     return a;
        // }


        return ans;

    }
};