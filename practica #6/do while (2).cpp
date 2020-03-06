#include<stdio.h>
int main()
{
	int i = 0, x =0;
	float prom, sum = 0;
	
	do{
		printf("\nescribe un numero: ");
		scanf ("%d" , &x);
		    sum = sum + x;
		    i++;
		    printf("\nsum = %f" , sum);
	}while (x>=0);
	    i= i -1;
	    sum= sum -x;
		prom = sum / i;
	    printf("\nEl promedio final fue: %.2f" , prom);
	return 0;
}
