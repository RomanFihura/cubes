#include "cubes.h"
std::random_device rd;
std::mt19937 gen1(rd());

int attempt(uint32_t cubes, uint32_t cube_faces)
{
    uint32_t temp = 0;
    for (uint32_t i = 0; i < cubes; i++)
    {
        temp += gen1() % cube_faces;
        temp++;
    }
    return temp;
};
int mostFrequent(uint32_t amount_of_throws, uint32_t cubes, uint32_t cube_faces)
{
    std::unordered_map<int, int> freq_count;
    for (uint32_t i = 0; i < amount_of_throws; ++i)
        ++freq_count[attempt(cubes, cube_faces)];

    auto most_freq_int =
        std::max_element(freq_count.begin(), freq_count.end(),
                         [](const auto &x, const auto &y) { return x.second < y.second; });

    return most_freq_int->first;
}
