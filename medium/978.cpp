#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        
        int n = arr.size();
        if (n == 1) return 1;
        vector<int> cmp(n-1);
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]>arr[i+1])
                cmp[i]=1;
            else if(arr[i]<arr[i+1])
                cmp[i]=-1;
            else
                cmp[i]=0;
        }
        int ans = 1;
        int cur = 1;

        for (int i = 0; i < n - 1; i++) {
            if (cmp[i] == 0) {
                cur = 1;
            } else if (i > 0 && cmp[i] == -cmp[i-1]) {
                cur++;
            } else {
                cur = 2;
            }
            ans = max(ans, cur);
        }
        return ans;
        
    }
};