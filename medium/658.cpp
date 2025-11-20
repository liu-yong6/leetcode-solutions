
#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
using namespace std;
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> res(k);
        int left=0,right=arr.size()-1;
        
        while(right-left+1>k)
        {
            if(abs(arr[left]-x)>abs(arr[right]-x))
                left++;
            else
                right--;
        }
        return vector<int>(arr.begin() + left, arr.begin() + right+1);

    }
};