#include <stdio.h>

int main() {
	
	int num;
	int pares = 0;
	int impares = 0;
	
	printf("Digite um numero para comecar (digite um numero maior que 1000 para parar): ");
	scanf("%d", &num);
	
	while (num <= 1000 && num > 0) {
		printf("Digite um numero: ");
		scanf("%d", &num);
		if (num % 2 == 0) {
			pares = pares + num;
		} else
		if (num % 2 != 0) {
			impares = impares + num;
		}
	}
	
	printf("\nA soma dos numeros pares eh: %d", pares);
	printf("\nA soma dos numeros impares eh: %d", impares);
	
	getchar();
	return 0;
}
