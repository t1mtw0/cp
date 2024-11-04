#include <algorithm>
#include <iostream>
#include <numeric>

const int N = 5;
const int X = 8;
int h[N];
int s[N];
int sol[N];

int solve(int x = X) {
    int res = 0;
    int tmp[N];
    for (int i = 0; i < N; ++i) {
        int n = h[i];
        int j = 0;
        while (n + s[i] <= X) {
            if (j == N)
                break;
            n += s[i];
            j++;
        }
        tmp[i] = j;
    }
    std::iota(std::begin(sol), std::end(sol), 0);
    std::stable_sort(std::begin(sol), std::end(sol),
                     [&tmp](int a, int b) { return tmp[a] < tmp[b]; });
    for (int i = 0; i < N; ++i)
        if (tmp[sol[i]] < i)
            return -1;
        else
            res = std::max(h[sol[i]] + s[sol[i]] * i, res);
    return res;
}

int main() {
    for (int i = 0; i < N; ++i) {
        h[i] = i;
        s[i] = i + 1;
    }
    std::cout << solve() << std::endl;
    std::cout << "Sol:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << sol[i] << std::endl;
    }
}
