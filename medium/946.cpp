#include<unordered_map>
#include<algorithm>
#include<vector>
#include<stack>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int p=0;
        // 最后栈为空时，则不存在问题
        for(int i=0;i<pushed.size();i++)
        {
            st.push(pushed[i]);
            while(!st.empty()&&popped[p]==st.top())
            {
                p++;
                st.pop();
            }
        }
        return st.empty();
    }
};