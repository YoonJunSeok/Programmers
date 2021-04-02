#include <string>
#include <vector>
using namespace std;
int dp[100005];
int solution(int n) {
    dp[0] = 0, dp[1] = 1;
    if (n == 0) return dp[0];
    else if (n == 1) return dp[1];
    else {
        if (dp[n] != 0)
            return dp[n];
        return dp[n] = ((solution(n - 1) % 1234567) + (solution(n - 2) % 1234567)) % 1234567;
    }
}
