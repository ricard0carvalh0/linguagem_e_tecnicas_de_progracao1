#include <stdio.h>

int main() {
	
	float numero, produto;
	
	printf("Digite um numero:\n");
	scanf("%f", &numero);
	
	produto = 0.25 * numero;
	
	printf("1/4 desse numero eh: %f", produto);
	
	return 0;
}
