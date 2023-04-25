#include <stdio.h>

int main() {
	
	int vetor[10];
	int cont, valor_maior_vetor, valor_menor_vetor, maior_vetor, menor_vetor;
	
	for(cont = 0; cont < 10; cont++){
		printf("Digite um numero: ");
		scanf("%d", &vetor[cont]);
		if(cont == 0){
			valor_maior_vetor = vetor[cont];
			maior_vetor = cont + 1;
			valor_menor_vetor = vetor[cont];
			menor_vetor = cont + 1;
		} else
		if(vetor[cont] > valor_maior_vetor){
			valor_maior_vetor = vetor[cont];
			maior_vetor = cont + 1;
		} else
		if(vetor[cont] < valor_menor_vetor){
			valor_menor_vetor = vetor[cont];
			menor_vetor = cont + 1;
		}
	}
	printf("\n");
	for(cont = 0; cont < 10; cont++){
		printf("{%d} ", vetor[cont]);
	}
	
	printf("\nO maior vetor eh o vetor [%d]", maior_vetor);
	printf("\nO valor do maior vetor eh: %d", valor_maior_vetor);
	printf("\nO menor vetor eh o vetor [%d]", menor_vetor);
	printf("\nO valor do menor vetor eh: %d", valor_menor_vetor);
	
	getchar();
	return 0;
}
