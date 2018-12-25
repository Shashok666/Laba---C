#include <stdio.h>
#include <math.h>

int main()
{

int error;
char c;
float F, G, Y, a, x;

printf(" 1-G\n 2-F\n 3-Y\n");
printf ("Выберите функцию \n");
scanf ("%c", &c);

switch (c)
{
	case '1':
	   printf ("Введите число a \n");
       scanf ("%f", &a);
       printf ("Введите число x \n");
       scanf ("%f", &x);
       if (a==0 && x==0)
	 		{
				printf("\nНевозможно сосчитать функцию.");
				break;
			}
		if ((25*a*a+30*a*x+9*x*x) == 0)
            {
                error = 1;  
                printf("Функция не может быть вычислена так как знаменатель не может быть равен 0\n");
                break;
            }
		G = (9*(7*a*a-19*a*x+10*x*x)) / (25*a*a+30*a*x+9*x*x);
	   printf("%f\n",G);
	break;

	case '2':
	   printf ("Введите число a \n");
       scanf ("%f", &a);
       printf ("Введите число x \n");
       scanf ("%f", &x);
	   F = cos(9*a*a-13*a*x-10*x*x);
	   printf("F=%f\n",F);
	break;

	case '3':
	   printf ("Введите число a \n");
       scanf ("%f", &a);
       printf ("Введите число x \n");
       scanf ("%f", &x);
       if ((log(10) == 0))
            {
                error = 2;  
                printf("Функция не может быть вычислена так как знаменатель не может быть равен 0\n");
                break;
            } 
	   Y = (log(-80*a*a-46*a*x+21*x*x+1)) / (log(10));
	   printf("Y=%f\n",Y);
	break;

	default:
		printf("Данная функция не существует \n");
		error = 4;
	break;
}
	return error;
}
