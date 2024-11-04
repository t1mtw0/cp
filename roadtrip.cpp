#include <iostream>

const int P = 9;
const int N = 5;

int solve(int d[]) {
    int i = 0;
    int s = 0;
    int p = P;
    bool cr;
    while (i < N - 1) {
        cr = false;
        while (d[i + 1] <= p) {
            i++;
            cr = true;
        }
        if (!cr)
            return -1;
        s++;
        p = d[i] + P;
    }
    return s;
}

int main() {
    int d[N] = {2, 5, 8, 10, 16};
    std::cout << solve(d) << std::endl;
}
