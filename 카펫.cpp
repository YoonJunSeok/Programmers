vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int row = 0, col = 0;
    for (int i = 1; i < 2501; i++) {
        col = i;
        row = brown / 2 + 2 - col;
        if ((row * col) == brown + yellow) {
            answer.push_back(row);
            answer.push_back(col);
            break;
        }
    }
    return answer;
}
