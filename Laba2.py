
#Лабораторная работа 2
#Вариант 13

import math

print("Функция G - 1, Функция F - 2, Функция Y - 3, Введите число: \n")
number = int(input())
if number == 1:
	# Вывод G
	a = float(input("Введите число a: "))
	x = float(input("\nВведите число x: "))
	if a == 0 and x == 0:
		print("\nНевозможно сосчитать функцию.")
	else:
		G = (9*(7*a*a-19*a*x+10*x*x)) / (25*a*a+30*a*x+9*x*x)
		print("\nG = ", G)
elif number == 2:
	#Вывод F
	a = float(input("Введите число a: "))
	x = float(input("\nВведите число x: "))
	F = math.cos(9*a*a-13*a*x-10*x*x)
	print("\nF = ", F)
elif number == 3:
	#Вывод Y
	a = float(input("Введите число a: "))
	x = float(input("\nВведите число x: "))
	if a!=0 and x!=0:
		print("\nНевозможно сосчитать функцию.")
	else:
		Y = (math.log(-80*a*a-46*a*x+21*x*x+1)) / (math.log(10)) 
		print("\nY = ", Y)
else:
	#Ошибка
	print("\nНе существует такой функции. Выберите из предложенных выше.")
 
		
		