#include <iostream>

const int N = 5;

std::pair<int, int> searchmatrix(int a[][N], int s)
{
    int lr = 0, rr = N - 1;
    while (lr <= rr)
    {
        int mr = lr + (rr - lr) / 2;
        if (s < a[mr][0])
            rr = mr - 1;
        else if (s > a[mr][N - 1])
            lr = mr + 1;
        else {
            // bs on row
            int l = 0, r = N - 1;
            while (l <= r)
            {
                int m = l + (r - l) / 2;
                if (a[mr][m] == s)
                    return std::make_pair(mr, m);
                else if (a[mr][m] > s)
                    r = m - 1;
                else
                    l = m + 1;
            }
            return std::make_pair(-1, -1);
        };
    }
    return std::make_pair(-1, -1);
}

int main()
{
    int a[N][N] =
    {
        {1, 2, 3, 4, 5},
        {2, 3, 4, 5, 6},
        {3, 4, 5, 6, 7},
        {4, 5, 6, 7, 8},
        {5, 6, 7, 8, 9}
    };
    std::pair<int, int> ans = searchmatrix(a, 9);
    std::cout << ans.first << " " << ans.second << std::endl;
}
