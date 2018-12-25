#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <string.h>

int main()
{	
	const int N = 100;
	int error,exit1, j, i;
	char number;
	float F, G, Y, a, x, x2, shag, min, max, kolshag;
	float mas [N];


	while (exit1 != 1)
	{ 
	  printf("Функция G - 1, Функция F - 2, Функция Y - 3, Введите число: \n");
    scanf("%c", &number);

    switch (number)
	 {
		case '1':
          	j = 0;
          	i = 0;
	   		  printf ("Введите число a \n");
       		scanf ("%f", &a);
       		printf ("Введите число x \n");
       		scanf ("%f", &x);
       		printf ("Введите число x2 \n");
       		scanf ("%f", &x2);
       		printf ("Введите колличество шагов вычисления функции\n");
       		scanf ("%f", &kolshag);
       		shag = (x2-x)/kolshag;
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
                  error = 1;
                  break;
                }
                if ((25*a*a+30*a*x+9*x*x) == 0)
                  {
                    error = 1;  
                    printf("Функция не может быть вычислена так как знаменатель не может быть равен 0\n");
                    break;
                  }
                G = (9*(7*a*a-19*a*x+10*x*x)) / (25*a*a+30*a*x+9*x*x);
                mas[j] = G;
                printf("%f\t %f\n", mas [j],x);
                j = j+1;
                i = i+1;
	    	 	}
	    	    min = mas[0];
	    	    max = mas[0];
          	for (j = 0; j <= i ; j++)
            	{
              		if (mas[j] < min )
              		{
                		min = mas[j];
              		}

              		if (mas[j] > max )
              		{
                		max = mas [j];
              		}
            	} 

          	printf("\n Минимальный элемент %f\n", min);
          	printf("\n Максимальный элемент %f\n", max);

	   	
		break;

		case '2':
          j = 0;
          i = 0;
	   		  printf ("Введите число a \n");
       		scanf ("%f", &a);
       		printf ("Введите число x \n");
       		scanf ("%f", &x);
       		printf ("Введите число x2 \n");
       		scanf ("%f", &x2);
       		printf ("Введите колличество шагов вычисления функции\n");
       		scanf ("%f", &kolshag);
       		shag = (x2-x)/kolshag;
       		if (shag > x2)
       			{
       			  printf ("Шаг вычисления функции больше чем сама область вычисления функции\n");
       			  error = 6;
       			  break;
       			}

       		for (;x <= x2-shag;x = x + shag)
       			{ 
       			  	  F = cos(9*a*a-13*a*x-10*x*x);
              		mas[j] = F;
              		printf("%f\t %f\n", mas [j],x);
              		j = j+1;
              		i = i+1;   		
       			}  
	    	min = mas[0];
	    	max = mas[0];
          	for (j = 0; j < i ; j++)
            	{
              		if (mas[j] < min )
              		{
                		min = mas[j];
              		}

              		if (mas[j] > max )
              		{
                		max = mas [j];
              		}
            	} 

          	printf("\n Минимальный элемент %f\n", min);
          	printf("\n Максимальный элемент %f\n", max);

		break;

		case '3':
          	j = 0;
          	i = 0;
	   		  printf ("Введите число a \n");
       		scanf ("%f", &a);
       		printf ("Введите число x \n");
       		scanf ("%f", &x);
        	printf ("Введите число x2 \n");	
        	scanf ("%f", &x2);
          if (a == 0 && x == 0) 
            {
              printf("\nНевозможно сосчитать функцию.");
              break;
            } 
       		printf ("Введите колличество шагов вычисления функции\n");
       		scanf ("%f", &kolshag);
       		shag = (x2-x)/kolshag;

       		if (shag > x2)
       			{
       			printf ("Шаг вычисления функции больше чем сама область вычисления функции\n");
       			break;
       			}


       		for (x;x <= x2-shag;x = x + shag)
       			{ 	
       				  if ((log(10) == 0))
                {
                  error = 1;  
                  printf("Функция не может быть вычислена так как знаменатель не может быть равен 0\n");
                  break;
                } 
	    		  	  Y = (log(-80*a*a-46*a*x+21*x*x+1)) / (log(10));
            		mas[j] = Y;
            		printf("%f\t %f\n", mas [j],x);
            		j = j+1;
            		i = i+1;      
        		}
            min = mas[0];
	    	    max = mas[0];
          	for (j = 0; j < i ; j++)
            	{
              		if (mas[j] < min )
              		{
                		min = mas[j];
              		}

              		if (mas[j] > max )
              		{
                		max = mas [j];
              		}
            	} 

          	printf("\n Минимальный элемент %f\n", min);
          	printf("\n Максимальный элемент %f\n", max);
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
