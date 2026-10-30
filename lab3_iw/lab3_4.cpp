#include <ctime>
#include <iostream>

// Проверяем, является ли год високосным (в феврале тогда 29 дней)
bool isLeap(int year) {
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(int month, int year) {
  switch (month) {
    case 2:
      return isLeap(year) ? 29 : 28;

    case 4:
    case 6:
    case 9:
    case 11:
      return 30;

    default:
      return 31;
  }
}

bool isValidDate(int day, int month, int year) {
  if (year <= 0) {
    return false;
  }

  if (month < 1 || month > 12) {
    return false;
  }

  if (day < 1 || day > daysInMonth(month, year)) {
    return false;
  }

  return true;
}

int main() {
  int day, month, year;

  std::cout << "Введите дату рождения (день месяц год): ";
  if (!(std::cin >> day >> month >> year)) {
    std::cout << "Ошибка ввода." << std::endl;
    return 1;
  }
  if (!isValidDate(day, month, year)) {
    std::cout << "Ошибка: некорректная дата." << std::endl;
    return 1;
  }

  // Получаем текущую системную дату
  std::time_t now = std::time(nullptr);
  std::tm* current = std::localtime(&now);

  if (current == nullptr) {
    std::cout << "Не удалось получить текущую дату." << std::endl;
    return 1;
  }

  int currentDay = current->tm_mday;
  int currentMonth = current->tm_mon + 1;
  int currentYear = current->tm_year + 1900;

  if (year > currentYear || (year == currentYear && month > currentMonth) ||
      (year == currentYear && month == currentMonth && day > currentDay)) {
    std::cout << "Ошибка: дата рождения не может быть в будущем." << std::endl;
    return 1;
  }

  int age = currentYear - year;

  // Если день рождения в этом году ещё не наступил, уменьшаем возраст на 1
  if (currentMonth < month || (currentMonth == month && currentDay < day)) {
    age--;
  }

  std::cout << "Ваш возраст: " << age << std::endl;

  return 0;
}
