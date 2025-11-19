#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int t;
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<k/2;j++)
            {
                t = grid[x+j][y+i];
                grid[x+j][y+i] = grid[x+k-j-1][y+i];
                grid[x+k-j-1][y+i] = t;
            }
        }
        return grid;
    }
};