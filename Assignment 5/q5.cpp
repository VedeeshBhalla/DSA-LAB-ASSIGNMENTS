#include<bits/stdc++.h>
using namespace std;

int main() {
    string exp;
    cout << "Enter postfix expression (single-digit operands): ";
    cin >> exp;

    stack<int> st;

    for (int i = 0; i < exp.length(); i++) {
        char c = exp[i];
        if (isdigit(c)) {
            st.push(c - '0');
        }
        else {
            int val2 = st.top(); st.pop();
            int val1 = st.top(); st.pop();

            switch (c) {
                case '+': st.push(val1 + val2); break;
                case '-': st.push(val1 - val2); break;
                case '*': st.push(val1 * val2); break;
                case '/': st.push(val1 / val2); break;
            }
        }
    }

    cout << "Result = " << st.top() << endl;
    return 0;
}
