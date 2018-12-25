import math

exit1 = 0
while exit1 == 0:

	print("Функция G - 1, Функция F - 2, Функция Y - 3, Введите число: \n")
	number = int(input())
	a = float (input ("a:"))
	x = float (input ("x:"))
	x2 = float (input("x2:"))
	shag = float (input("Шаг вычисления:"))
	if shag > x2:
		print ("Шаг вычисления функции больше чем сама область вычисления функции\n")
		continue

	if number == 1:
		while x <= x2:
			if a == 0 and x == 0:
				print("\nНевозможно сосчитать функцию.")
				continue
			G = (9*(7*a*a-19*a*x+10*x*x)) / (25*a*a+30*a*x+9*x*x)
			print ('{:2f}\t {:2f}'.format(x,G))
			x = x + shag

	elif number == 2:
		a = float (input ("a:"))
		x = float (input ("x:"))
		x2 = float (input("x2:"))
		shag = float (input("Шаг вычисления:"))
		if shag > x2:
			print ("Шаг вычисления функции больше чем сама область вычисления функции\n")
			continue
		while x <= x2:	
			F = math.cos(9*a*a-13*a*x-10*x*x)
			print ('{:2f}\t {:2f}'.format(x,F))
			x = x + shag
			
	elif number == 3:
			a = float (input ("a:"))
			x = float (input ("x:"))
			x2 = float (input("x2:"))
			if a == 0 and x == 0:
				print("\nНевозможно сосчитать функцию.")
				continue
			shag = float (input("Шаг вычисления:"))
			if shag > x2:
				print ("Шаг вычисления функции больше чем сама область вычисления функции\n")
				continue
			Y = (math.log(-80*a*a-46*a*x+21*x*x+1)) / (math.log(10)) 
			print ('{:2f}\t {:2f}'.format(x,Y))
			x = x + shag
			
	else:
		print('Такой функции нету\n')

	print ("Хотите выйти из программы 1 - да 0 - нет")
	exit1 = int(input())		
	