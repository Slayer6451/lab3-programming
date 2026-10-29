#include <iomanip>
#include <iostream>
#include <string>
//перевод числа из десятичной системы счисления в двоичную
int main() {
  int num;
  //ввод числа
  std::cout << "Введи число: ";
  std::cin >> num;
  
  std::string res = "";
  while (num != 0) {
    int ost = num % 2;
    res = std::to_string(ost) + res;
    num = num / 2;
  }
  //вывод переведенного числа
  std::cout << "Результат: " << res;
  return 0;
}