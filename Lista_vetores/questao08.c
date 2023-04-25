#include <stdio.h>

int main() {
	
	int vetor[50];
	int cont;
	
	for(cont = 0; cont < 50; cont++){
		printf("Digite um numero: ");
		scanf("%d", &vetor[cont]);
	}
	printf("\nApenas os indices pares:\n");
	for(cont = 0; cont < 50; cont = cont + 2){
		printf("%d ", vetor[cont]);
	}
	printf("\nApenas os indices impares:\n");
	for(cont = 1; cont <= 50; cont = cont + 2){
		printf("%d ", vetor[cont]);
	}
	printf("\nTodo o vetor de tras para a frente:\n");
	for(cont = 49; cont >= 0; cont = cont - 1){
		printf("{%d} ", vetor[cont]);
	}
	getchar();
	return 0; 
}
