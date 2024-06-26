#include <iostream>

int numbers_of_ways(int steps, int maxJump = 3) {
  if (steps == 0) {
    return 1;
  } else if (steps < 0 || maxJump < 1) {
    return 0;
  } else {
    int sum = 0;
    for (int count = maxJump; count > 0; steps--, count--) {
      sum += numbers_of_ways(steps - 1, maxJump);
      //**сумма чисел по типу Фибоначчи, но количество чисел в сумме
      // зависит от максимального прыжка*/
    }
    return sum;
  }
}

int main() {
  std::cout << "How many options does a rabbit have"
            << " to jump onto the stairs when:\n";

  int steps, maxJump;
  std::cout << "Input number of step: ";
  std::cin >> steps;
  std::cout << "Input max jump: ";
  std::cin >> maxJump;

  std::cout << "For max jump = " << maxJump << ". Number of solution options: ";
  std::cout << numbers_of_ways(steps, maxJump) << "\n";

  std::cout << "For max jump = " << 3 << ". Number of solution options: ";
  std::cout << numbers_of_ways(steps);
}