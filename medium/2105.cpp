#include<unordered_map>
#include<unordered_set>
#include<string>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int left=0,right=plants.size()-1;
        int res=0,a=capacityA,b=capacityB;
        while(left<right)
        {
            if(a<plants[left])
            {
                a=capacityA;
                res++;   
            }
            a-=plants[left];
            left++;
            
            if(b<plants[right])
            {
                b=capacityB;
                res++;  
            }
            b-=plants[right];
            right--;
        }
        if(left==right&&max(a,b)<plants[left])
            res++;
        return res;
    }
};