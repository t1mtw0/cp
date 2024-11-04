#include <iostream>

const int T = 14;
const int N = 5;
int t[N];
int g[N];
int dp[T + 1];

int solve() {
    for (int i = 0; i <= T; ++i)
        dp[i] = 0;
    for (int i = 0; i < N; ++i)
        for (int j = T; j >= t[i]; --j)
            dp[j] = std::max(dp[j], dp[j - t[i]] + g[i]);
    return dp[T];
}

int main() {
    for (int i = 0; i < N; ++i) {
        t[i] = i + 3;
        g[i] = i + 1;
    }
    std::cout << solve() << std::endl;
}
