bool solution(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ')') {
            if (st.empty()) st.push(s[i]);
            else {
                if (st.top() == '(') {
                    st.pop();
                }
                else if (st.top() == ')'){
                    st.push(s[i]);
                }
            }
        }
        else if (s[i] == '(') {
            if (st.empty()) st.push(s[i]);
            else {
                if (st.top() == ')') {
                    return false;
                }
                else if (st.top() == '(') {
                    st.push(s[i]);
                }
            }
        }
    }
    if (!st.empty())
        return false;
    return true;
}
