#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int ans=0;
        int cus=0,sum=0;
        for(int i=0;i<customers.size();i++)
        {
            if(grumpy[i]==1)
                cus+=customers[i];
            else
                ans+=customers[i];

            
            if(i>=minutes)
            {     
                if(grumpy[i-minutes]==1)
                    cus-=customers[i-minutes];
            }
            sum=max(cus,sum);


        }
        return sum+ans;
        
    }
};
int main()
{
    vector<int> customers = {3};
    vector<int> grumpy = {3};
    int m=1;
    Solution s;
    cout<<s.maxSatisfied(customers,grumpy,m);

    return 0;
}