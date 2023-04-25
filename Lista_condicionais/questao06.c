#include <stdio.h> 

int main() {
	
	float numero1, numero2;
	char operador;
	
	printf("Digite uma expressao no formato: numero operador numero: ");
	scanf("%f %c %f", &numero1, &operador, &numero2);
	
	switch(operador) {
		
		case '+' :
			printf(" = %f", numero1 + numero2); break;
			
		case '-' :
			printf(" = %f", numero1 - numero2); break;
			
		case '*' :
			printf(" = %f", numero1 * numero2); break;
			
		case '/' :
			printf(" = %f", numero1 / numero2); break;
			
		default :
			printf("\nOperacao invalida.");
	}
	
	getchar();
	return 0;
}
