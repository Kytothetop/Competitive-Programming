#include <bits/stdc++.h>

using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

string postfixToInfix(string postfix) {
    stack<string> s;
    for (char& c : postfix) {
        if (isOperator(c)) {
            string operand2 = s.top();
            s.pop();
            string operand1 = s.top();
            s.pop();
            string expression = "(" + operand1 + c + operand2 + ")";
            s.push(expression);
        } else {
            s.push(string(1, c)); // Convert char to string
        }
    }
    return s.top();
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string postfix;
    cin >> postfix;

    string infix = postfixToInfix(postfix);
    cout << infix;

    return 0;
}
