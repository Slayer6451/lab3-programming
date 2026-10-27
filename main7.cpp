#include <iomanip>
#include <iostream>
#include <string>

int main() {
  int num;
  std::cout << "Введи число: ";
  std::cin >> num;
  std::string res = "";
  while (num != 0) {
    int ost = num % 2;
    res = std::to_string(ost) + res;
    num = num / 2;
  }
  std::cout << "Результат: " << res;
  return 0;
}