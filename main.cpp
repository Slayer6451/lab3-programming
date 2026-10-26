#include <iostream>
#include <string>
#include <typeinfo>
int main() {
  int num1;
  double num2;
  std::string text;
  std::cout << "Введите целое число: ";
  std::cin >> num1;
  std::cout << "Введите дробное число: ";
  std::cin >> num2;
  std::cin.ignore(); // Очистка буфера перед getline
  std::cout << "Введите строку: ";
  std::getline(std::cin, text);
  std::cout << "Значение: " << num1 << ", тип: " << typeid(num1).name() << "\n";
  std::cout << "Значение: " << num2 << ", тип: " << typeid(num2).name() << "\n";
  std::cout << "Значение: " << text << ", тип: " << typeid(text).name() << "\n";
  return 0;
}
