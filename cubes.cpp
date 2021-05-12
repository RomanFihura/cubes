#include "cubes.h"
#include <algorithm>
#include <random>
#include <unordered_map>

std::random_device rd;
std::mt19937 gen1(rd());

uint32_t attempt(uint32_t cubes, uint32_t cube_faces)
{
    uint32_t temp = 0;
    for (uint32_t i = 0; i < cubes; i++)
    {
        temp += gen1() % cube_faces + 1;
    }
    return temp;
};
int mostFrequent(uint32_t amount_of_throws, uint32_t cubes, uint32_t cube_faces)
{
    if (amount_of_throws > 0 && cubes > 0 && cube_faces > 0)
    {
        std::unordered_map<uint32_t, uint32_t> freq_count;
        for (uint32_t i = 0; i < amount_of_throws; i++)
            freq_count[attempt(cubes, cube_faces)]++;

        auto most_freq_int =
            std::max_element(freq_count.begin(), freq_count.end(),
                             [](const auto &x, const auto &y) { return x.second < y.second; });

        return most_freq_int->first;
    }
    else
    {
        throw std::invalid_argument{"Invalid count of throws, cubes or cube faces"};
    }
}
