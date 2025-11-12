#include<unordered_map>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    int minArrivalsToDiscard(vector<int>& arrivals, int w, int m) {
        int result=0,len = arrivals.size();
        unordered_map<int,int> count;
        for(int i=0;i<len;i++)
        {
            if(i>=w)
                count[arrivals[i-w]]--;
            
            if(count[arrivals[i]]>=m)
            {
                result++;
                arrivals[i]=0;
                continue;
            }
            count[arrivals[i]]++;
            
        }
        return result;
    }
};