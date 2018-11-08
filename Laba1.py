
#Лабораторная работа 1
#Вариант 13

import math

a = float(input("Введите число a: "))
x = float(input("\nВведите число x: "))
G = (9*(7*a*a-19*a*x+9*x*x)) / (25*a*a+30*a*x+9*x*x)
print("\nG = ", G)

a = float(input("Введите число a: "))
x = float(input("\nВведите число x: "))
F = math.cos(9*a*a-13*a*x-10*x*x)
print("\nF = ", F)

a = float(input("Введите число a: "))
x = float(input("\nВведите число x: "))
Y = (math.log(-80*a*a-46*a*x+21*x*x+1)) / (math.log(10))
print("\nY = ", Y)
