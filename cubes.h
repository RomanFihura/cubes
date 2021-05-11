#pragma once
#include <algorithm>
#include <random>
#include <stdexcept>
#include <stdint.h>
#include <unordered_map>
#include <vector>

int attempt(uint32_t cubes, uint32_t cube_faces);
int mostFrequent(std::vector<int> &arr);
void filling(std::vector<int> &numbers, uint32_t amount_of_throws, uint32_t cubes,
             uint32_t cube_faces);