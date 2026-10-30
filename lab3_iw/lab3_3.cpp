#include <cctype>
#include <iostream>
#include <string>

int main() {
  std::string input;
  std::cout << "Введите строку: ";
  std::getline(std::cin,
               input);  // Считываем всю строку целиком, включая пробелы
  int letters = 0;
  int digits = 0;
  int spaces = 0;
  int punctuation = 0;

  // Проходим по каждому символу строки и относим его к одной из категорий
  for (unsigned char c : input) {
    if (std::isalpha(c)) {
      letters++;
    } else if (std::isdigit(c)) {
      digits++;
    } else if (std::isspace(c)) {
      spaces++;
    } else if (std::ispunct(c)) {
      punctuation++;
    }
  }
  // Выводим подсчитанную статистику по строке
  std::cout << "Буквы: " << letters << std::endl;
  std::cout << "Цифры: " << digits << std::endl;
  std::cout << "Пробелы: " << spaces << std::endl;
  std::cout << "Знаки препинания: " << punctuation << std::endl;

  return 0;
}
