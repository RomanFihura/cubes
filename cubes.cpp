#include "cubes.h"

std::random_device rd;
std::mt19937 gen1(rd());

int attempt()
{
    uint32_t temp;

    temp = gen1() % 6;
    temp++;
    temp += gen1() % 6;
    temp++;
    return temp;
};

int mostFrequent2(std::vector<int> &arr)
{
    if (arr.empty())
        return -1;

    std::unordered_map<int, int> freq_count;

    for (const auto &item : arr)
        freq_count[item]++;

    auto most_freq_int =
        std::max_element(freq_count.begin(), freq_count.end(),
                         [](const auto &x, const auto &y) { return x.second < y.second; });

    return most_freq_int->first;
}