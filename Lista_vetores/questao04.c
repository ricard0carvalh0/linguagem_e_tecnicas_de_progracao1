#include <stdio.h>

int main() {
	
	int inicial, razao, cont;
	int pa[10];
	
	printf("Digite o numero inicial: ");
	scanf("%d", &inicial);
	
	printf("Digite a razao: ");
	scanf("%d", &razao);
	
	for(cont = 0; cont < 10; cont++){
		pa[cont] = inicial + cont * razao;
	}
	printf("\nOs termos da PA sao: ");
	for(cont = 0; cont < 10; cont++){
		printf("%d ", pa[cont]);
	}
	getchar();
	return 0;
}
