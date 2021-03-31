int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> pq (scoville.begin(), scoville.end());
    while (1) {
        if (pq.top() < K) {
            if ((pq.size() == 1 && pq.top() < K) || pq.empty()) return -1;
            int one = pq.top(); pq.pop();
            int two = pq.top(); pq.pop();
            pq.push(one + two * 2); answer++;
        }
        else break;
    }
    return answer;
}
