#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
bool gcd(int a) {
    int idx = 2;
    if (a == 1)
        return false;
    while (idx < a) {
        if (a % idx == 0)
            return false;
        idx++;
    }
    return true;
}
int solution(string numbers) {
    int answer = 0;
    int idx = 1;
    vector<string> varr;
    sort(numbers.begin(), numbers.end());
    do {
        for (int i = 1; i <= numbers.size(); i++) {
            vector<bool> v(numbers.size() - i, false);
            v.insert(v.end(), i, true);
            do {
                string tmp = "";
                bool re = false;
                for (int j = 0; j < numbers.size(); j++) {
                    if (v[j]) tmp += numbers[j];
                }
                if (tmp[0] == '0') {
                    tmp.erase(0);
                }
                for (int i = 0; i < varr.size(); i++) {
                    if (varr[i] == tmp) {
                        re = true;
                        break;
                    }
                }
                if (!re) varr.push_back(tmp);
                if (!re && tmp.length() && gcd(stoi(tmp)))
                    answer++;
                cout << tmp << "\n";
            } while (next_permutation(v.begin(), v.end()));
        }
    } while (next_permutation(numbers.begin(), numbers.end()));
    return answer;
}

int main() {
    cout << solution("17");
}
