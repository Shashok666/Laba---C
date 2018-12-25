#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <string.h>

int main()
{
	int error, exit1;
	char number; 
	float F, G, Y, a, x, x2, shag;


	while (exit1 != 1)
	{
	printf("Функция G - 1, Функция F - 2, Функция Y - 3, Введите число: \n");
	scanf("%c", &number);

	switch (number)
	{
		case '1':
	   		printf ("Введите число a \n");
       		scanf ("%f", &a);
       		printf ("Введите число x \n");
       		scanf ("%f", &x);
       		printf ("Введите число x2 \n");
       		scanf ("%f", &x2);
       		printf ("Введите шаг вычисления функции\n");
       		scanf ("%f", &shag);
       		if (shag > x2)
       			{
       			printf ("Шаг вычисления функции больше чем сама область\n");
       			error = 6;
       			break;
       			}

        		for (;x <= x2-shag;x = x + shag)
            	{
	 				if (a==0 && x==0)
	 				{
						printf("\nНевозможно сосчитать функцию.");
					}
					if ((25*a*a+30*a*x+9*x*x) == 0)
              		{
                		error = 1;  
                		printf("Функция не может быть вычислена так как знаменатель не может быть равен 0\n");
                		break;
             		 }
					G = (9*(7*a*a-19*a*x+10*x*x)) / (25*a*a+30*a*x+9*x*x);
	    			printf("%f\t %f\n",G,x);
	    		}
	   		break;
	   	
		break;

		case '2':
	   		printf ("Введите число a \n");
       		scanf ("%f", &a);
       		printf ("Введите число x \n");
       		scanf ("%f", &x);
       		printf ("Введите число x2 \n");
       		scanf ("%f", &x2);
       		printf ("Введите шаг вычисления функции\n");
       		scanf ("%f", &shag);

       		if (shag > x2)
       			{
       			printf ("Шаг вычисления функции больше чем сама область вычисления функции\n");
       			error = 6;
       			break;
       			}

       		for (;x <= x2-shag;x = x + shag)
       			{ 
       			F = cos(9*a*a-13*a*x-10*x*x);
	    		printf("%f\t %f\n",F,x);
	    		
       			}
		break;

		case '3':
	   		printf ("Введите число a \n");
       		scanf ("%f", &a);
       		printf ("Введите число x \n");
       		scanf ("%f", &x);
        	printf ("Введите число x2 \n");	
        	scanf ("%f", &x2);
        	printf ("Введите шаг вычисления функции\n");
       		scanf ("%f", &shag);
       		if (a == 0 && x == 0) 
       			{
				printf("\nНевозможно сосчитать функцию.");
				break;
				}	
       		if (shag > x2)
       			{
       			printf ("Шаг вычисления функции больше чем сама область вычисления функции\n");
       			break;
       			}


       		for (x;x <= x2;x = x + shag)
       			{ 	
       				if ((log(10) == 0))
                	{
                  	error = 1;  
                  	printf("Функция не может быть вычислена так как знаменатель не может быть равен 0\n");
                  	break;
                	} 
	    			Y = (log(-80*a*a-46*a*x+21*x*x+1)) / (log(10));
	    			printf("%f\t %f\n",Y,x);
        		}
		break;

		default:
			printf("Такой функции нету \n");
			error = 5;
		
		}	
	
	printf("Хотите выйти из программы? 1 - Да 0 - Нет\n");
	scanf ("%d", &exit1);
	getchar();
	}
	return error;
}
