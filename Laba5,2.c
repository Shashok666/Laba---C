#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int main()
{	
	char* sovp;
	char k[255];
	char s2[10];
	sprintf(s2, "%c", '2');
	char s4[10];
	sprintf(s4, "%c", '4');
	char s6[10];
	sprintf(s6, "%c", '6');
	char s8[10];
	sprintf(s8, "%c", '8');
	char s0[10];
	sprintf(s0, "%c", '0');
	char zap[10];
	sprintf(zap, "%c",',');
	int i;
	printf("Введите число\n");
	fgets(k, 255, stdin);
    sovp = strstr(k, zap);
    while(sovp != NULL)
		{
			printf("Число не целое\n");
			exit(1);
		}	
	i = 0;
    sovp = strstr(k, s2);
    while(sovp != NULL)
		{
			sovp = strstr(sovp + 1, s2);
			i+=1;
		}
	sovp = strstr(k, s4);	
	while(sovp != NULL)
		{
			sovp = strstr(sovp + 1, s4);
			i+=1;
		}
	sovp = strstr(k, s6);	
	while(sovp != NULL)
		{
			sovp = strstr(sovp + 1, s6);
			i+=1;
		}
	sovp = strstr(k, s8); 
	while(sovp != NULL)
		{
			sovp = strstr(sovp + 1, s8);
			i+=1;
		}
	sovp = strstr(k, s0);	 
	while(sovp != NULL)
		{
			sovp = strstr(sovp + 1, s0);
			i+=1;
		} 			 	 
	printf("Колличество четных чисел %d\n", i);
	return i;
}			





