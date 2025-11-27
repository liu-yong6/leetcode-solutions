#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        if (n < 3) return 0;
        
        int ans = 0;
        int i = 1;

        while (i < n - 1) {
            // 找到山峰（strict peak）
            if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
                int left = i;
                int right = i;

                // 向左扩展上坡
                while (left > 0 && arr[left] > arr[left-1]) left--;

                // 向右扩展下坡
                while (right < n-1 && arr[right] > arr[right+1]) right++;

                ans = max(ans, right - left + 1);

                i = right;   // 跳到山末尾继续扫描
            }
            else {
                i++;
            }
        }

        return ans;
    }
};
