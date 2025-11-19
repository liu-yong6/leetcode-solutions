#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> count;
        int len = fruits.size();
        int result = 0,t=0,left=0;
        for(int i=0;i<len;i++)
        {
            count[fruits[i]]++;
            t++;
            if(count.size()>2)
            {
                result=max(t,result);//最大值在每次移动都需要判断，并且需要在判断尺寸后再进行赋值
                while(count.size()>2)
                {
                    count[fruits[left]]--;
                    left++;//left在未判断就自增
                    if(count[fruits[left]]==0)
                        count.erase(fruits[left]);
                }
            }
        }
        return result;
        
    }
};
int main()
{
    vector<int> customers = {3};
    vector<int> grumpy = {3};
    int m=1;
    Solution s;
    // cout<<s.totalFruit();

    return 0;
}