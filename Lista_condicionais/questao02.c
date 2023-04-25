#include <stdio.h>

int main() {
	
	int idade;
	char nome[10];
	
	printf("Digite o seu nome:\n");
	scanf("%s", &nome);
	printf("Digite a sua idade:\n");
	scanf("%d", &idade);
	
	if (idade <= 13) {
		printf("\nVoce eh uma crianca.");
	}	
	else if (idade > 13 && idade < 20) {
		printf("\nVoce eh um(a) adolescente.");
	}
	else {
		printf("\nVoce eh um(a) adulto.");
	}
	
	getchar();
	return 0;
}
