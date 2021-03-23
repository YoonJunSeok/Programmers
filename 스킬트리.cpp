#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    for (int i = 0; i < skill_trees.size(); i++) {
        int idx = 0;
        for (int j = 0; j < skill_trees[i].size(); j++) {
            if (skill[idx] == skill_trees[i][j]) {
                skill_trees[i].erase(skill_trees[i].begin() + j);
                idx++;
                j--;
            }
        }
        bool co = true;
        for (int j = idx; j < skill.size(); j++) {
            for (int h = 0; h < skill_trees[i].size(); h++) {
                if (skill[j] == skill_trees[i][h]) {
                    co = false;
                    break;
                }
            }
            if (co == false)
                break;
        }
        if (co == true)
            answer++;
    }
    return answer;
}
