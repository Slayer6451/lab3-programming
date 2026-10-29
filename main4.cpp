#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
int main() {
  std::string text;
  std::cout << "Введите строку: ";
  std::getline(std::cin, text);
  std::cout << "Длина: " << text.length() << "\n";
  // Верхний регистр
  std::string upper = text;
  std::transform(upper.begin(), upper.end(), upper.begin(),
                 [](unsigned char c) { return std::toupper(c); });
  std::cout << "Вверхний регистр: " << upper << "\n";
  // Нижний регистр
  std::string lower = text;
  std::transform(lower.begin(), lower.end(), lower.begin(),
                 [](unsigned char c) { return std::tolower(c); });
  std::cout << "Нижний регистр: " << lower << "\n";
  std::cout << "Последний символ: " << text.back() << "\n";
  std::cout << "Первый символ: " << text.front() << "\n";
  // Подсчёт пробелов
  int space = std::count(text.begin(), text.end(), ' ');
  std::cout << "Количество пробелов:" << space << "\n";
  return 0;
}
