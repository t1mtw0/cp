#include <iostream>

const long long N = 10e6;
const long long M = 998244353;
long long n;
long long l[N], r[N];

int solve_easy() {
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> l[i];
        std::cin >> r[i];
    }
    long long s = 0;
}

int solve_hard() {
    long long s = 0;
    return s;
}

int main() {
    long t;
    std::cin >> t;
    for (long i = 0; i < t; ++i)
        std::cout << solve_easy() << std::endl;
    // std::cout << solve_hard() << std::endl;
}
