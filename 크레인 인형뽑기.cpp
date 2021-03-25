int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> basket;
    for (int i = 0; i < moves.size(); i++) {
        int row = board.size();
        int col = moves[i] - 1;
        for (int j = 0; j < row; j++) {
            if (board[j][col] != 0) {
                if (!basket.empty()) {
                    if (basket.back() == board[j][col]) {
                        basket.pop_back();
                        answer += 2;
                    }
                    else {
                        basket.push_back(board[j][col]);
                    }
                }
                else {
                    basket.push_back(board[j][col]);
                }
                board[j][col] = 0;
                break;
            }
        }
    }
    return answer;
}
