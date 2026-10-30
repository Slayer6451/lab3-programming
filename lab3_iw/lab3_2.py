# Переводит число n в систему счисления с основанием base
def f(n, base):
    if n == 0:
        return "0"
    sign = ""
    if n < 0:
        sign = "-"
        n = abs(n)
    digits = "0123456789ABCDEF"
    result = ""
    while n > 0:
        result = (
            digits[n % base] + result
        )  # Остаток от деления даёт очередную цифру новой системы
        n //= base
    return sign + result


number = int(input("Введите целое число: "))
# Выводим результат сразу в трёх системах счисления
print("Двоичная система: ", f(number, 2))
print("Восьмеричная система: ", f(number, 8))
print("Шестнадцатеричная система: ", f(number, 16))
