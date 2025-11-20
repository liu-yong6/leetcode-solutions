#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
using namespace std;
class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int x = arr[(arr.size()-1)/2];
        int left=0,right=arr.size()-1;
        vector<int> res(k);
        for(int i=0;i<k;i++)
        {
            if(abs(arr[left]-x)>abs(arr[right]-x))
                res[i]=arr[left++];
            else
                res[i]=arr[right--];
        }
        return res;
    }
};