#include <iostream>

void even_digits(long long number, int& result) {
  if (number % 2 == 0 && number > 0) result++;
  if (number > 1) even_digits(number / 10, result);
}

int main() {
  std::cout << "How many even digits are there in a number?\n";
  long long num = 9223372036854775806; 
  std::cout << "You number: " << num << " \n";

  int ans = 0;
  even_digits(num, ans);
  
  std::cout << "Number of even digits in your number: ";
  std::cout << ans;
}