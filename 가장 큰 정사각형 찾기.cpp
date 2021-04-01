int solution(vector<vector<int>> board)
{
    int answer = 0;
    int row = board.size();
    int col = board[0].size();
    int mxidx = min(row, col);
    int arr[1005] = { 0 };
    for (int i = 0; i < row; i++) {
        int mx = 0;
        int num = 0;
        for (int j = 0; j < col; j++){
            if (board[i][j] == 1) {
                arr[j]++;
                mx = max(mx, arr[j]);
            }
            else
                arr[j] = 0;
        }
        for (int h = mx; h > 0; h--) {
            bool in = false;
            int cnt = 0;
            for (int j = 0; j < col; j++) {
                if (arr[j] >= h)
                    cnt++;
                else cnt = 0;
                if (cnt == h) {
                    num = cnt * cnt;
                    answer = max(num, answer);
                    in = true;
                    break;
                }
            }
            if (in)
                break;
        }
    }
    return answer;
}
