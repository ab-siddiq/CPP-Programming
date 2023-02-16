#include <bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
int main()
{
    stack<char> st;
    string ans = "";
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        char now = s[i];
        if (now >= 'a' && now <= 'z')
            ans += now;
        else if (now == '(')
            st.push('(');
        else if (now == ')')
        {
            while (st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && prec(s[i]) <= prec(st.top()))
            {
                ans += st.top();
                st.pop();
            }
            st.push(now);
        }
    }
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    cout << ans << endl;
}
