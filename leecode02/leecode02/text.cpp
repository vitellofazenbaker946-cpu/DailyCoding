#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param pushV int整型vector
     * @param popV int整型vector
     * @return bool布尔型
     */
    bool IsPopOrder(vector<int>& pushV, vector<int>& popV) {
        stack<int> st;
        size_t popi = 0;

        for (auto& e : pushV)
        {
            st.push(e);
            while (!st.empty() && st.top() == popV[popi])
            {
                st.pop();
                ++popi;
            }
        }
        return st.empty();
    }
};