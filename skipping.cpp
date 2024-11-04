#include <iostream>

int t;
int n;
const int N = 4*10e5;

int solve() {
    int a[N];
    int b[N];

    std::cin >> n;
    int ai;
    for (int i = 0; i < n; ++i) {
        std::cin >> ai;
        a[i] = ai;
    }
    int bi;
    for (int i = 0; i < n; ++i) {
        std::cin >> bi;
        b[i] = bi;
    }
}

int main() {
    std::cin >> t;
    for (int i = 0; i < t; ++i)
        std::cout << solve() << std::endl;
}
