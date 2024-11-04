#include <iostream>

const int N = 10;
int p[N];
int s[N];

void solve() {
    std::sort(std::begin(p), std::end(p));
    for (int i = 0; i < N; ++i) {
        s[i] = p[i];
    }
}

int main() {
    for (int i = 0; i < N; ++i) {
        p[i] = N - i - 1;
    }

    solve();

    for (int i = 0; i < N; ++i) {
        std::cout << s[i] << std::endl;
    }
}
