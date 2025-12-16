#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        // 异或的符号为^
        // 异或满足交换律
        vector<int> res;
        vector<int> xor_count;
        xor_count.resize(arr.size()+1);
        for(int i=0;i<arr.size();i++)
        {
            xor_count[i+1] = xor_count[i]^arr[i];
        }

        for(int i=0;i<queries.size();i++)
        {
            res.push_back(xor_count[queries[i][1]+1]^xor_count[queries[i][0]]);
        }

        return res;
        
    }
};