#include <stdio.h>
#include <stdlib.h>

int main()
{
	//declaracion de variables
	float num1, num2;
	char operacion;
	//introduccion de datos
	    printf("\nEscribe el primer numero");
	    scanf("%f", &num1);
	    printf("\nEscribe el segundo numero");
	    scanf("%f", &num2);
	    printf("seleccione la operacion que se realice (+, -, *, /)");
	    scanf("%s", &operacion);
	    //ciclo switch
	    switch(operacion){
	    	case '+' :
	    		printf("%f + %f = %f", num1, num2, num1 + num2);
	    		break;
	    		
	    	case '-' :
			    printf("%f - %f = %f", num1, num2, num1 - num2);
			    break;

			case '*' :
			    printf("%f * %f = %f", num1, num2, num1 * num2);
			    break;
			
			case '/' :
			    printf("%f / %f = %f", num1, num2, num1 / num2);
			    break;
		        
				default:
				    printf("\nError");		
					   
		}
}
