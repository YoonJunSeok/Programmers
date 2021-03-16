#include <string>
#include <vector>
#include <queue>
using namespace std;
int solution(int bridge_length, int weight, vector<int> truck_weights) {
    queue<int> q;
    int time = 0, inbridge = 0, idx = 0;
    while (1) {
        time++;
        if (q.size() == bridge_length) {
            inbridge -= q.front();
            q.pop();
        }
        if (inbridge + truck_weights[idx] <= weight) {
            if (idx == truck_weights.size() - 1) {
                time += bridge_length;
                break;
            }
            q.push(truck_weights[idx]);
            inbridge += truck_weights[idx];
            idx++;
        }
        else q.push(0);
    }
    return time;
}
