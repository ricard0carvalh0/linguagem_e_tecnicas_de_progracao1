#include <stdio.h>

int main() {
	
	int numero;
	
	printf("Digite um numero inteiro:\n");
	scanf("%d", &numero);
	
	if(numero % 2 == 0) {
		printf("Esse numero eh par.");
	} else {
		printf("Esse numero eh impar.");
	}
	
	return 0;
}
