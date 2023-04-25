#include <stdio.h>

int main() {
  
	int inicial, razao, cont;
	int pg[10];
	
	printf("Digite o numero inicial: ");
	scanf("%d", &inicial);
	
	printf("\nDigite a razao: ");
	scanf("%d", &razao);
	
	pg[0] = inicial;
	for(cont = 1; cont < 10; cont++){
		pg[cont] = pg[cont - 1] * razao;
	}
	printf("\nOs termos da PG sao: ");
	for(cont = 0; cont < 10; cont++){
		printf("%d ", pg[cont]);
	}
	getchar();
	return 0;
}
