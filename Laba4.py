import math

exit1 = 0
while exit1 == 0:

	mas = []	
	print("Функция G - 1, Функция F - 2, Функция Y - 3, Введите число: \n")
	number = int(input())
	
	if number == 1:
		i = 0
		a = float (input ("a:"))
		x = float (input ("x:"))
		x2 = float (input("x2:"))
		shag = float (input("Шаг вычисления:"))
		if shag > x2:
			print ("Шаг вычисления функции больше чем сама область вычисления функции\n")
			continue
		while x <= x2:
			if a == 0 and x == 0:
				print("\nНевозможно сосчитать функцию.")
				continue
			G = (9*(7*a*a-19*a*x+10*x*x)) / (25*a*a+30*a*x+9*x*x)
			mas.append(G)
			print ('{:2f}\t {:2f}'.format(x,mas[i]))
			i = i + 1
			x = x + shag

		minimum = min(mas)
		maximum = max(mas)
		print ('Минимальный элемент ''%2f' %minimum)
		print ('Максимальный элемент ''%2f' %maximum) 	 	
				

	elif number == 2:
		i = 0
		a = float (input ("a:"))
		x = float (input ("x:"))
		x2 = float (input("x2:"))
		shag = float (input("Шаг вычисления:"))
		if shag > x2:
			print ("Шаг вычисления функции больше чем сама область вычисления функции\n")
			continue
		while x <= x2:	
			F = math.cos(9*a*a-13*a*x-10*x*x)
			mas.append(F)
			print ('{:2f}\t {:2f}'.format(x,mas[i]))
			i = i + 1
			x = x + shag

		minimum = min(mas)
		maximum = max(mas)
		print ('Минимальный элемент ''%2f' %minimum)
		print ('Максимальный элемент ''%2f' %maximum) 	 	
			
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
			while x <= x2:	
				Y = (math.log(-80*a*a-46*a*x+21*x*x+1)) / (math.log(10))
				mas.append(Y)
				print ('{:2f}\t {:2f}'.format(x,mas[i]))
				i = i + 1
				x = x + shag

			minimum = min(mas)
			maximum = max(mas)
			print ('Минимальный элемент ''%2f' %minimum)
			print ('Максимальный элемент ''%2f' %maximum)
			
	else:
		print('Такой функции нету\n')

	print ("Хотите выйти из программы 1 - да 0 - нет")
	exit1 = int(input())		
	