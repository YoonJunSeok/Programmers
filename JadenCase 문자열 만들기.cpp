string solution(string s) {
    string answer = "";
    if (s[0] >= 97) s[0] -= 32;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] >= 97 && s[i - 1] == ' ')
            s[i] -= 32;
        else if (s[i] >= 65 && s[i] <= 90 && s[i - 1] != ' ')
            s[i] += 32;
    }
    answer = s;
    return answer;
}
