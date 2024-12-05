#include <iostream>

const int N = 10e6;
const int D = 10e6;
int n, d;
int o[N];
int c[N];
int v[N];
int dp[N][D];

int solve() {
    for (int i = 0; i <= n; ++i)
        for (int j = 0; j <= d; ++j)
            dp[i][j] = 0;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= d; ++j) {
            int t = 1;
            while (t * c[i - 1] + o[i - 1] <= j) {
                dp[i][j] =
                    std::max(dp[i][j], dp[i - 1][j - t * c[i - 1] - o[i - 1]] +
                                           t * v[i - 1]);
                t++;
            }
            dp[i][j] = std::max(dp[i][j], dp[i - 1][j]);
        }
    return dp[n][d];
}

int main() {
    std::cin >> n >> d;
    for (int i = 0; i < n; ++i)
        std::cin >> o[i] >> c[i] >> v[i];
    std::cout << solve() << std::endl;
}
