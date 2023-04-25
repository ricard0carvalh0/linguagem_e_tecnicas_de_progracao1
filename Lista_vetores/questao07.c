#include <stdio.h>

int main() {
	
	int vetor[20];
	int cont, soma_par = 0, soma_impar = 0;
	
	for(cont = 0; cont < 20; cont++){
		printf("Digite um numero: ");
		scanf("%d", &vetor[cont]);
		if(vetor[cont] % 2 == 0){
			soma_par = soma_par + 1;
		} else
		if(vetor[cont] % 2 != 0){
			soma_impar = soma_impar + 1;
		}
	}
	printf("\n");
	for(cont = 0; cont < 20; cont++){
		printf("{%d} ", vetor[cont]);
	}
	
	printf("\nExistem %d numeros pares nos valores fornecidos.", soma_par);
	printf("\nExistem %d numero impares nos valores fornecidos.", soma_impar);
	
	getchar();
	return 0;
}
