#include <stdio.h>

int main() {
	
	float n1, n2, soma, subtracao, multiplicacao, divisao;
	char operador;
	
	printf("Escolha um operador matematico:");
	scanf("%c", &operador);
	
	printf("Digite um numero:\n");
	scanf("%f", &n1);
	printf("Digite o segundo numero:\n");
	scanf("%f", &n2);
	
	switch(operador) {
		
		case '+' :
			soma = n1 + n2;
			printf("\nA soma desses dois numeros eh: %f", soma); break;
		case '-' :
			subtracao = n1 - n2;
			printf("\nA subtracao desses dois numeros eh: %f", subtracao); break;
		case '*' :
			multiplicacao = n1 * n2;
			printf("\nA multiplicacao desses dois numeros eh: %f", multiplicacao); break;
		case '/' :
			divisao = n1 / n2;
			printf("\nA divisao desses dois numeros eh: %f", divisao); break;
		default :
			printf("\nEsse operador nao eh valido.");
	}
	
	return 0;
}
