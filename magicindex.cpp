#include <iostream>

int magicindex(int a[], int n) {
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (a[m] == m)
            return m;
        else if (a[m] > m)
            r = m - 1;
        else
            l = m + 1;
    }
    return -1;
}

int main() {
    int a[5] = {-1, 1, 3, 4, 5};
    std::cout << magicindex(a, 5) << std::endl;
}
