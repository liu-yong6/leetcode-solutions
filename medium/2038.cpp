#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    bool winnerOfGame(string colors) {
        int n=colors.size();
        int i=1,j=1,a=0,b=0;
        
        while(i<n-1)
        {
            if(colors[i]=='A'&&colors[i]==colors[i-1]&&colors[i]==colors[i+1])
            {
                a++;
            }
            else if(colors[i]=='B'&&colors[i]==colors[i-1]&&colors[i]==colors[i+1])
                b++;
            i++;
        }
        return a>b;
        

        
    }
};