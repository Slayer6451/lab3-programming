n = int(input("Введите десятичное число: "))
bin_num=bin(n)[2:]
bin_num1 = ""
while n:
    bin_num1 = str(n % 2) + bin_num1
    n = n//2
print(bin_num,bin_num1)