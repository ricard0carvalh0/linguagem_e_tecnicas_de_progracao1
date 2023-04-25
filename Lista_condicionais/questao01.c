#include <stdio.h>

int main() {
	
	float numero;
	
	printf("Digite um numero real:\n");
	scanf("%f", &numero);
	
	if (numero > 0) {
		printf("\nEsse numero eh maior que 0.");
	}
	else if (numero < 0) {
		printf("\nEsse numero eh menor que 0.");
	}
	else {
		printf("\nEsse numero eh igual a 0.");
	}
	getchar();
	return 0;
}
