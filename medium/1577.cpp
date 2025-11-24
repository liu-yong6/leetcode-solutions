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
        // for(int i=len1-1;i>1;i--)
        //因为现在是两个数组，所以需要遍历到0
        for(int i=len1-1;i>=0;i--) 
        {
            //10^5使用pow会溢出
            long long target = 1LL * nums1[i] * nums1[i];

            int left=0,right=len2-1;
            while(left<right)
            {
                // if(nums2[left]*nums2[right]==pow(nums1[i],2))
                long long prod = 1LL * nums2[left] * nums2[right];
                if (prod == target)
                {
                    ans++;
                    int l = left, r = right;
                    
                    //如果从left到right都相等，那么需要使用公式Cn2 
                    if (nums2[left] == nums2[right]) {
                        long long n = right - left + 1;
                        ans += n * (n - 1) / 2;
                        break;
                    }
                    while (left < right && nums2[left] == nums2[l]) left++;
                    while (right >= left && nums2[right] == nums2[r]) right--;
                    ans += (left - l) * (r - right);
                }
                // else if(nums2[left]*nums2[left]>pow(nums1[i],2))
                else if (prod > target)
                {
                    // break;
                    right--;
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