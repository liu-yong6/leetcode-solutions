#include<unordered_map>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int len = cardPoints.size();
        int result = 0,sum=0;
        for(int i=0;i<2*k;i++)
        {
            int t = cardPoints[(len-k+i)%len];
            sum+=t;
            if(i>k)
            {
                result = max(result,sum);
                sum-=cardPoints[(len-2*k+i)%len];
            }
        }
        return result;


    }
};