#include "cubes.h"

#include <random>
#include <stdexcept>
#include <stdint.h>

std::random_device rd;
std::mt19937 gen1(rd());

uint32_t attempt()
{
    uint32_t temp;

    temp = gen1() % 6;
    temp++;
    temp += gen1() % 6;
    temp++;
    return temp;
};
int mostFrequent(int n)
{
    int topCount = 0, count, topElement, array[n];

    for (int i = 0; i < n; i++)
    {
        array[i] = attempt();
    }
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (array[i] == array[j])
                count++;
        }
        if (count > topCount)
        {
            topCount = count;
            topElement = array[i];
        }
    }
    // std::cout << "Element: " << topElement << " occuring " << topCount << "
    // times" << std::endl;
    return topElement;
}
int mostFrequent2(int n)
{
    uint32_t sum;
    uint32_t combination[11] = {};
    for (uint32_t i = 0; i < n; i++)
    {
        sum = attempt();

        switch (sum)
        {
        case 2:
            combination[0]++;
            break;
        case 3:
            combination[1]++;
            break;
        case 4:
            combination[2]++;
            break;
        case 5:
            combination[3]++;
            break;
        case 6:
            combination[4]++;
            break;
        case 7:
            combination[5]++;
            break;
        case 8:
            combination[6]++;
            break;
        case 9:
            combination[7]++;
            break;
        case 10:
            combination[8]++;
            break;
        case 11:
            combination[9]++;
            break;
        case 12:
            combination[10]++;
            break;
        default:
            throw std::out_of_range{"impossible sum from cubes"};
            break;
        }
    }
    uint32_t sum_number_repeat = combination[0];
    uint32_t sum_number;
    for (uint32_t i = 0; i < 10; i++)
    {
        if (sum_number_repeat < combination[i + 1])
        {
            sum_number_repeat = combination[i + 1];
            sum_number = i + 1;
        }
    }
    return sum_number + 2;
}