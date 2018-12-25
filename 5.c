#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int main()
{	
	const int N = 100;
	uint8_t test;
	int error,exit1, j, i, k;
	char number;
	float F, G, Y, a, x, x2, shag, min, max, kolshag;
	float mas [N];
  char stx[255]; char stx2[255]; char sta[255]; char stk[255]; char stg[255]; char stf [255]; char sty [255]; char blok [255]; char sh[255];
  char* sovp;
  

	while (exit1 != 1)
	{
		memset(stg,0,255); memset(stf,0,255); memset(blok,0,255); memset(sty,0,255); 
		memset(mas, 0, N); memset(sh,0,255);

    printf("Функция G - 1, Функция F - 2, Функция Y - 3, Введите число: \n");
    scanf("%c", &number);
		getchar();
	switch (number)
	{
		case '1':
          k = 0;
          j = 0;
          i = 0;
          sovp = 0;
	   		  printf ("Введите число a \n");
          fgets(sta, 255, stdin);
          a = atof(sta);
       		printf ("Введите число x \n");
       		fgets(stx, 255, stdin);
          x = atof(stx);
       		printf ("Введите число x2 \n");
       		fgets(stx2, 255, stdin);
          x2 = atof(stx2);
       		printf ("Введите колличество шагов вычисления функции\n");
       		fgets(stk, 255, stdin);
          kolshag = atof(stk);
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
                  error = 2;  
                  printf("Функция не может быть вычислена так как знаменатель не может быть равен 0\n");
                  break;
                }  
              G = (9*(7*a*a-19*a*x+10*x*x)) / (25*a*a+30*a*x+9*x*x);
              mas[j] = G;
              printf("%f\t %f\n", mas [j],x);
              sprintf(blok, "%2f\t", mas[j]);
              strcat(stg, blok);
              j = j+1;
              i = i+1;
	    	 	  } 	
        printf("\n%s\n", stg);
        printf ("Задайте шаблон для поиска совпадения\n");
        scanf("%s", sh);
        sovp = strstr(stg, sh);
        while(sovp != NULL)
		{
			sovp = strstr(sovp + 1, sh);
			k+=1;
		}    
          printf("\nКолличество совпадений %d\n",k); 
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
          sovp = 0;
	   		  printf ("Введите число a \n");
          fgets(sta, 255, stdin);
          a = atof(sta);
          printf ("Введите число x \n");
          fgets(stx, 255, stdin);
          x = atof(stx);
          printf ("Введите число x2 \n");
          fgets(stx2, 255, stdin);
          x2 = atof(stx2);
          printf ("Введите колличество шагов вычисления функции\n");
          fgets(stk, 255, stdin);
          kolshag = atof(stk);
       		shag = (x2-x)/kolshag;
       		if (shag > x2)
       			{
       			  printf ("Шаг вычисления функции больше чем сама область вычисления функции\n");
       			  error = 3;
       			  break;
       			}

       		for (;x <= x2-shag;x = x + shag)
       			{ 
       			  	  F = cos(9*a*a-13*a*x-10*x*x);
              		mas[j] = F;
              		printf("%f\t %f\n", mas [j],x);
              		sprintf(blok, "%2f\t", mas[j]);
              		strcat(stf, blok);
              		j = j+1;
              		i = i+1;   		
       			}
       	printf("%s\n", stf);
       	printf ("\nЗадайте шаблон для поиска совпадения\n");
        scanf("%s", sh);
        sovp = strstr(stf, sh);
        while(sovp != NULL)
		{
			sovp = strstr(sovp + 1, sh);
			k+=1;
		}      
          	printf("\nКолличество совпадений %d\n",k); 	
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
            sovp = 0;
	   		printf ("Введите число a \n");
          fgets(sta, 255, stdin);
          a = atof(sta);
       		printf ("Введите число x \n");
          fgets(stx, 255, stdin);
          x = atof(stx);
        	printf ("Введите число x2 \n");	
          fgets(stx2, 255, stdin);
          x2 = atof(stx2);
          if (a == 0 && x == 0) 
            {
              printf("\nНевозможно сосчитать функцию.");
              error = 4;
              break;
            } 
       		printf ("Введите колличество шагов вычисления функции\n");
          	fgets(stk, 255, stdin);
          	kolshag = atof(stk);
       		shag = (x2-x)/kolshag;

       		if (shag > x2)
       			{
       			printf ("Шаг вычисления функции больше чем сама область вычисления функции\n");
            error = 3;
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
              	sprintf(blok, "%2f\t", mas[j]);
              	strcat(sty, blok);
            		j = j+1;
            		i = i+1;      
        		}
        	printf("%s\n", sty);
        	printf ("\nЗадайте шаблон для поиска совпадения\n");
        	scanf("%s", sh);
        	sovp = strstr(sty, sh);
        	while(sovp != NULL)
			{
				sovp = strstr(sovp + 1, sh);
				k+=1;
			}      
          	printf("\nКолличество совпадений %d\n",k);	
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
