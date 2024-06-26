#include <iostream>
#include <vector>

void swapVec(std::vector<int>& vec, int arr[]) {
  int size = vec.size();  // вектор и массив равны по размеру(уместно в данной задаче)

  for (int i = 0; i < size; i++) {
    int temp = vec[i];
    vec[i] = arr[i];
    arr[i] = temp;
  }
}

void print_vec_and_arr(std::vector<int> vec, int arr[]) {
  int size = vec.size();  // Вектор и массив равны по размеру

  std::cout << "vector: ";
  for (int i = 0; i < size; i++) {
    std::cout << vec[i] << " ";
  }

  std::cout << std::endl;

  std::cout << "array:  ";
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << " ";
  }

  std::cout << std::endl;
}

int main() {
  std::cout << "Swap you vector with array\n";

  std::vector<int> a = {1, 2, 3, 4};

  int b[] = {2, 4, 6, 8};

  std::cout << "You vector and array befor swap:\n";
  print_vec_and_arr(a, b);

  swapVec(a, b);

  std::cout << "You vector and array after swap:\n";
  print_vec_and_arr(a, b);
}