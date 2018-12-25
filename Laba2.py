import math

print ("Выберите функцию\n 1- G\n 2- F\n 3- Y\n")
c = int (input("Номер функции:"))

if c == 1:
	a = float (input ("a:"))
	x = float (input ("x:"))
	if a == 0 and x == 0:
		print("\nНевозможно сосчитать функцию.")
		exit(0)
	G = (9*(7*a*a-19*a*x+10*x*x)) / (25*a*a+30*a*x+9*x*x)
	print ("G=""%2f" %G)

elif c == 2:
	a = float (input ("a:"))
	x = float (input ("x:"))	
	F = math.cos(9*a*a-13*a*x-10*x*x)
	print ("F=""%2f" %F)

elif c == 3:
	a = float (input ("a:"))
	x = float (input ("x:"))
	Y = (math.log(-80*a*a-46*a*x+21*x*x+1)) / (math.log(10)) 
	print ("Y=""%2f" %Y)
	
else:
	print('Данная функция не существует \n')
	
