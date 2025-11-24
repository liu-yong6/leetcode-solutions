#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    int numTriplets(vector<int>& nums1, vector<int>& nums2) {
        int ans=0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int len1=nums1.size(),len2=nums2.size();
        for(int i=len1-1;i>1;i--)
        {
            int left=0,right=len2-1;
            while(left<right)
            {
                if(nums2[left]*nums2[right]==pow(nums1[i],2))
                {
                    ans++;
                }
                else if(nums2[left]*nums2[left]>pow(nums1[i],2))
                {
                    break;
                }
                else
                    left++;
            }
        }
        for(int i=len2-1;i>1;i--)
        {
            int left=0,right=len1-1;
            while(left<right)
            {
                if(nums1[left]*nums1[right]==pow(nums2[i],2))
                {
                    ans++;
                }
                else if(nums1[left]*nums1[left]>pow(nums2[i],2))
                {
                    break;
                }
                else
                    left++;
            }
        }
        return ans;


    }
};