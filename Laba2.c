
#include <stdio.h>
#include <math.h>

int main(){
	
	int number;
	float a, x, G, Y, F;
	printf("Функция G - 1, Функция F - 2, Функция Y - 3, Введите число: \n");
	scanf("%d", &number);
	switch (number) {

	case 1:
		// Вывод G		
		printf("\nВведите число a и x: ");
		scanf("%f %f",&a,&x);
	 	if (a==0 && x==0) {
			printf("\nНевозможно сосчитать функцию.");
		}
		else{
			G = (9*(7*a*a-19*a*x+10*x*x)) / (25*a*a+30*a*x+9*x*x);
			printf("\nG = %f\n",G);
		}
		break;
	
	case 2:
		// Вывод F		
		printf("\nВведите число a и x: ");
		scanf("%f %f",&a,&x);
		F = cos(9*a*a-13*a*x-10*x*x);
		printf("\nF = %f\n", F);
		break;
	
	case 3:
		// Вывод Y
		printf("\nВведите число a и x: ");
		scanf("%f %f",&a,&x);
		if (a!=0 && x!=0) {
			printf("\nНевозможно сосчитать функцию.");
		}
		else{	
			Y = (log(-80*a*a-46*a*x+21*x*x+1)) / (log(10)); 
			printf("\nY = %f\n", Y);
		}
		break;
	default:
		//Ошибка
		printf("\nНе существует такой функции. Выберите из предложенных выше.");
		break;
	}
	return 0;
}
				
			