#include <iomanip>
#include <iostream>
// расчет имт

int main() {
  double weight, height;

  std::cout << "Введите вес (кг): ";
  std::cin >> weight;

  // Рост нужно вводить в метрах: например, 175 см -> 1.75
  std::cout << "Введите рост (м): ";
  std::cin >> height;

  if (weight <= 0.0 || height <= 0.0) {
    std::cout << "Ошибка: вес и рост должны быть положительными числами."
              << std::endl;
    return 1;
  }

  // Считаем ИМТ по формуле вес / рост^2
  double bmi = weight / (height * height);
  if (bmi < 18.5) {
    std::cout << "масса тела недостаточная\n";
  } else if (bmi < 25) {
    std::cout << "масса тела нормальная\n";
  } else if (bmi < 30) {
    std::cout << "масса тела избыточная\n";
  } else if (bmi < 35) {
    std::cout << "ожирение 1 степени\n";
  } else if (bmi < 40) {
    std::cout << "ожирение 2 степени\n";
  } else if (bmi >= 40) {
    std::cout << "ожирение 3 степени\n";
  }

  return 0;
}