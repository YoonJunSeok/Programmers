#include <string>
#include <vector>
#include <queue>
using namespace std;
int solution(vector<int> priorities, int location) {
    priority_queue<int> pq;
    queue<pair<int,int>> q;
    int printOrder = 0;
    for (int i = 0; i < priorities.size(); i++){
        pq.push(priorities[i]);
        q.push({i, priorities[i]});
    }
    while(!q.empty()){
        int idx = q.front().first;
        int pri = q.front().second;
        q.pop();
        if (pri == pq.top()){
            printOrder++;
            pq.pop();
            if (location == idx)
                return printOrder;
        } else q.push({idx, pri});
    }
}
