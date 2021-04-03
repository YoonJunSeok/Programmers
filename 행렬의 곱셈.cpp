vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    for (int i = 0; i < arr1.size(); i++) {
        vector<int> tmp;
        for (int j = 0; j < arr2[0].size(); j++) {
            int num = 0;
            for (int h = 0; h < arr2.size(); h++) {
                num += arr1[i][h] * arr2[h][j];
            }
            tmp.push_back(num);
        }
        answer.push_back(tmp);
    }
    return answer;
}
