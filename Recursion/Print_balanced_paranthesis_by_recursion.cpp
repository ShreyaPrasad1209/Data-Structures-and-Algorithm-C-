//proposed by dark_coder
#include <bits/stdc++.h>
using namespace std;
void generateParenthesis(int n, int open, int close, string s, vector<string> &ans)
{

    if (open == n && close == n)
    {
        ans.push_back(s);
        return;
    }

    if (open < n)
    {
        generateParenthesis(n, open + 1, close, s + "{", ans);
    }

    if (close < open)
    {
        generateParenthesis(n, open, close + 1, s + "}", ans);
    }
}
int main()
{
    int n;
    cout<<"Enter number of paranthesis you want to print combination of (eg '1' if '()')"<<endl;
    cin>>n;
    vector<string> ans;
    generateParenthesis(n, 0, 0, "", ans);
    cout<<endl;
    for (auto s : ans)
    {
        cout << s << endl;
    }
    return 0;
}
