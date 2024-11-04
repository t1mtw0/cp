#include <iostream>

const long long N = 10e6;
const long long M = 998244353;
long long n;
long long l[N], r[N];

int solve() {
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> l[i];
        std::cin >> r[i];
    }
    long long s = 0;

}

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; ++i)
        std::cout << solve() << std::endl;
}
