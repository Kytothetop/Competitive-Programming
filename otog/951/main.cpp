#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> stk;
    char cmd;
    while(cin >> cmd)
        {
            if(not stk.empty())
                {
                    if(stk.top() > 255)
                        {
                            int temp = stk.top() % 256;
                            stk.pop();
                            stk.push(temp);
                        }
                    else if(stk.top() < 0)
                        {
                            int temp = 256 - ((-(stk.top())) % 256);
                            stk.pop();
                            stk.push(temp);
                        }
                }
            int temp1,temp2;
            switch (cmd)
                {
                case 'T':
                    int temp;
                    cin >> temp;
                    stk.push(temp);
                    break;
                case 'P':
                    stk.pop();
                    break;
                case 'A':
                    temp1 = stk.top();
                    stk.pop();
                    temp2 = stk.top();
                    stk.pop();
                    stk.push(temp1 + temp2);
                    break;
                case 'S':
                    temp1 = stk.top();
                    stk.pop();
                    temp2 = stk.top();
                    stk.pop();
                    stk.push(temp1 - temp2);
                    break;
                case 'M':
                    temp1 = stk.top();
                    stk.pop();
                    temp2 = stk.top();
                    stk.pop();
                    stk.push(temp1 * temp2);
                    break;
                case 'B':
                    cout << stk.top() << '\n';
                    break;

                default:
                    break;
                }

        }
}
