#include<vector>
int* prevSmaller(int* A, int n1, int *len1) {
 vector<int>ans;
        stack<int>st;
        st.push(-1);
        for(int i=0;i<n1;i++)
        {
            int curr=A[i];
            while(curr<=st.top())
            {
                st.pop();
            }
            ans.push_back(st.top());
            st.push(A[i]);
        }
        return ans;
}
