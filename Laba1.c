
#include <stdio.h>
#include <math.h>

int main() {
	
	float a, x, G, Y, F;

	printf("Введите a и x\n");
	scanf("%f %f" ,&a,&x);
	G = (9*(7*a*a-19*a*x+10*x*x)) / (25*a*a+30*a*x+9*x*x);
	printf("G = %f\n" ,G);

	printf("Введите a и x\n");
	scanf("%f %f" ,&a,&x);
	F = cos(9*a*a-13*a*x-10*x*x);
	printf("\nF = %f\n" ,F);

	printf("Введите a и x\n");
	scanf("%f %f" ,&a,&x);
	Y = (log(-80*a*a-46*a*x+21*x*x+1)) / (log(10));
	printf("\nY = %f\n" ,Y);

	return 0;
}

	

	
