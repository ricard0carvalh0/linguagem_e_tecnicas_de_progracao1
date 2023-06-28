#include <stdio.h>
#include <string.h>

int main() {
	
	char palavra[100];
	int tamanho = 0;
	int i;
	
	printf("Digite uma palavra qualquer:\n");
	gets(palavra);
	
	while (palavra[tamanho] != '\0') {
		tamanho++;
	}
	
	printf("\nEssa palavra invertida fica:\n");
	
	for(i = tamanho - 1; i >= 0; i--) {
		printf("%c", palavra[i]);
	}
	
	return 0; 
}
