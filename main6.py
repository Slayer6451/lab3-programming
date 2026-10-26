print("Конвертер температур")
print("1. Из °С в °F")
print("2. Из °F в °С")

choice = input("Ваш выбор (1/2): ")

if choice == "1":
    celsius = float(input("Введите температуру в °С: "))
    fahrenheit = celsius * 9/5 + 32
    print(f"{celsius:.1f}°C = {fahrenheit:.1f}°F")
elif choice == "2":
    fahrenheit = float(input("Введите температуру в °F: "))
    celsius = (fahrenheit - 32) * 5/9
    print(f"{fahrenheit:.1f}°F = {celsius:.1f}°C")
else:
    print("Некорректный выбор")