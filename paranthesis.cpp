#include <iostream>
#include <stack>
using namespace std;

bool checkBalance(string str) {
    stack<char> st;
    for(char ch : str) {
        if(ch=='(' || ch=='{' || ch=='[') st.push(ch);
        else if(ch==')' || ch=='}' || ch==']') {
            if(st.empty()) return false;
            char t = st.top(); st.pop();
            if((ch==')' && t!='(') || (ch=='}' && t!='{') || (ch==']' && t!='['))
                return false;
        }
    }
    return st.empty();
}

int main() {
    string s1 = "{[HEYYY], HOW ARE (YOU) }";
    cout << (checkBalance(s1) ? "Balanced" : "Not Balanced") << endl;

    string s2 = "([a+b])}";
    cout << (checkBalance(s2) ? "Balanced" : "Not Balanced") << endl;

    return 0;
}
