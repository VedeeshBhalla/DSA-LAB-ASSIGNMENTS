#include <iostream>
#include <stack>
using namespace std;

string reverseString(string str) {
    stack<char> st;
    for (char ch : str) {
        st.push(ch);
    }
    string reversed = "";
    while (!st.empty()) {
        reversed += st.top();
        st.pop();
    }

    return reversed;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    string result = reverseString(str);
    cout << "Reversed string: " << result << endl;

    return 0;
}
