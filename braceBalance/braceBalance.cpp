#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

unordered_map<char, int> symbols = {
    {'[', -1},
    {'(', -2},
    {'{', -3},
    {']', 1},
    {')', 2},
    {'}', 3},
};

string isBalanced(string S)
{
    stack<char> st;
    for (char bracket : S)
    {
        if (symbols[bracket] < 0)
            st.push(bracket);
        else
        {
            if (st.empty())
                return "NO";
            char top = st.top();
            st.pop();
            if (symbols[top] + symbols[bracket] != 0)
                return "NO";
        }
    }
    if (st.empty())
        return "YES";
    else
        return "NO";
}
int main()
{
    string s;
    cin >> s;
    cout << isBalanced(s) << endl;

    return EXIT_SUCCESS;
}