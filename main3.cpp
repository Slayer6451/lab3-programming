#include <iomanip>
#include <iostream>
int main() {
  int Sec;
  std::cout << "Введите число секунд: ";
  std::cin >> Sec;
  int hours = Sec / 3600;
  int minutes = (Sec % 3600) / 60;
  int seconds = Sec % 60;
  std::cout << std::setfill('0');
  std::cout << std::setw(2) << hours << ":" << std::setw(2) << minutes << ":"
            << std::setw(2) << seconds << "\n";
  return 0;
}