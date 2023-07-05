#include <stdio.h>

int main() {
	
	float n1, n2, n3, maior, menor, intermediario;
	
	printf("Digite o primeiro numero:\n");
	scanf("%f", &n1);
	printf("Digite o segundo numero:\n");
	scanf("%f", &n2);
	printf("Digite o terceiro numero:\n");
	scanf("%f", &n3);
	
	if(n1 > n3 && n3 > n2) {
		maior = n1;
		intermediario = n3;
		menor = n2;
	} else if(n1 > n2 && n2 > n3) {
		maior = n1;
		intermediario = n2;
		menor = n3;
	} else if(n2 > n3 && n3 > n1) {
		maior = n2;
		intermediario = n3;
		menor = n1;	
	} else if(n2 > n1 && n1 > n3) {
		maior = n2;
		intermediario = n1;
		menor = n3;
	} else if(n3 > n2 && n2 > n1) {
		maior = n3;
		intermediario = n2;
		menor = n1;
	} else if(n3 > n1 && n1 > n2) {
		maior = n3;
		intermediario = n1;
		menor = n2;
	}
	
	printf("\nO maior numero digitado eh: %f", maior);
	printf("\nO numero digitado intermediario eh %f", intermediario);
	printf("\nO menor numero digitado eh: %f", menor);

	return 0;
}
