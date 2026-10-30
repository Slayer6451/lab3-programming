#include <iostream>
#include <string>

using namespace std;

// Переводит неотрицательное число в систему счисления с основанием base (2, 8
// или 16)
string toBase(int n, int base) {
  if (n == 0) {
    return "0";
  }
  string digits = "0123456789ABCDEF";
  string result = "";
  while (n > 0) {
    result = digits[n % base] +
             result;  // Остаток от деления даёт очередную цифру числа
    n = n / base;
  }

  return result;
}
int main() {
  int number;
  cout << "Введите целое число: ";
  cin >> number;

  if (number < 0) {
    cout << "Ошибка: число должно быть неотрицательным." << endl;
    return 1;
  }

  // Выводим число сразу в трёх системах счисления
  cout << "Двоичная система: " << toBase(number, 2) << endl;
  cout << "Восьмеричная система: " << toBase(number, 8) << endl;
  cout << "Шестнадцатеричная система: " << toBase(number, 16) << endl;

  return 0;
}
