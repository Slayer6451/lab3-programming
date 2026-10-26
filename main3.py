Sec = int(input("Введите количество секунд: "))
hours = Sec // 3600
minutes = (Sec % 3600) // 60
seconds = Sec % 60
print(f"{hours:02d}:{minutes:02d}:{seconds:02d}")
