#include "cubes.h"

#include <random>
#include <stdint.h>

std::random_device rd;
std::mt19937 gen1(rd());

uint32_t attempt() {
  uint32_t temp;

  temp = gen1() % 6;
  temp++;
  temp += gen1() % 6;
  temp++;
  return temp;
};
int mostFrequent(int n) {
  int topCount = 0, count, topElement, array[n];

  for (int i = 0; i < n; i++) {
    array[i] = attempt();
  }
  for (int i = 0; i < n; i++) {
    count = 0;
    for (int j = 0; j < n; j++) {
      if (array[i] == array[j])
        count++;
    }
    if (count > topCount) {
      topCount = count;
      topElement = array[i];
    }
  }

  // std::cout << "Element: " << topElement << " occuring " << topCount << "
  // times" << std::endl;
  return topElement;
}