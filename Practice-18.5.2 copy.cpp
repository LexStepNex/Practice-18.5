#include <iostream>

int numbers_of_ways(int steps, int maxJump = 3) {
  int temp = (steps - 1) - maxJump;
  if (temp < 1) temp = 0;

  if (steps < 1 || maxJump < 1) {
    return 0;
  } else if (steps == 1 || maxJump == 1) {
    return 1;
  } else {
    return numbers_of_ways(steps - 1, maxJump) +
           numbers_of_ways(steps - 1, maxJump - 1) + temp;
  }
}

int main() {
  int n, k;
  for (n = 0; n < 13; n++) {
    for (k = 0; k < 13; k++) {
      std::cout << numbers_of_ways(n, k) << "\t";
    }
    std::cout << "\n";
  }
}