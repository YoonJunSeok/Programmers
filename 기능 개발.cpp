#include <string>
#include <vector>
using namespace std;
vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int day, mxday = 0;
    for (int i = 0; i < progresses.size(); i++) {
        day = (99 - progresses[i]) / speeds[i] + 1;
        if (answer.empty() || mxday < day)
            answer.push_back(1);
        else
            ++answer.back();
        if (mxday < day)
            mxday = day;
    }
    return answer;
}
