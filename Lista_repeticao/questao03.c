#include <stdio.h>

int main() {
	
	int num;
	int produto = 1;
	
	printf("Entre com um numero para comecar (digite 0 caso queira parar):");
	scanf("%d", &num);
	
	while (num != 0) {
		printf("Digite um numero: ");
		scanf("%d", &num);
		if (num != 0) {
			produto = produto * num;
		}
	}
	
	printf("\nO produto dos numeros digitados eh: %d", produto);
	
	getchar();
	return 0;
}
