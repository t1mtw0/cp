#include <iostream>
#include <unordered_map>

const std::unordered_map<int, int> COINMAP = {{0, 10}, {1, 5}, {2, 1}};

int mincoins(int value)
{
    int coins = 0;
    for (int i = 0; i < 3; ++i)
    {
        int coinvalue = COINMAP.at(i);
        coins += value / coinvalue;
        value %= coinvalue;
    }
    return coins;
}

int main()
{
    std::cout << mincoins(29) << std::endl;
}
