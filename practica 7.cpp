#include <stdio.h>
#include <stdlib.h>

int i, n, b, mult;
int main ()
{
  printf("escribe un numero base:  \n");
  scanf("%d" ,&b);
  printf("escribe un numero multiplo que desea:  \n");
  scanf("%d" ,&n);
  for (i=0; i<10; i++)
  {
  	mult=i*b;
  	printf("\t%d", mult);
  }
  
return 0;
}


