#include <iostream>
int k;
int numbers_of_ways(int steps, int maxJump = 3) {
  if (steps == 0) {
    return 1;
  } else if (steps < 0 || maxJump < 1) {
    return 0;
  } else {
    return numbers_of_ways(steps - maxJump) +
           numbers_of_ways(steps, maxJump - 1);
  }
}

int main() {
  int n, k;
  std::cout << "Input number of step: ";
  std::cin >> n;
  std::cout << "Input max step: ";
  std::cin >> k;

  std::cout << "Number of solution options: ";
  std::cout << numbers_of_ways(n, k);
}