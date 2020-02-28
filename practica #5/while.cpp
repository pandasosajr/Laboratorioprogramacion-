#include <stdio.h>
int main()
{
	int i = 0, x;
	float prom, sum = 0;
	
	
	while (x >= 0)	
	{
		printf("\nescribe un numero: ");
		scanf ("%d" , &x);
		if(x>=0){
		sum = sum + x;
		i++;
		printf("\nsum = %f" , sum);
	    }    	
	}
	prom = sum / i;
	printf("\nEl promedio final fue: %.2f" , prom);
	return 0;
}
