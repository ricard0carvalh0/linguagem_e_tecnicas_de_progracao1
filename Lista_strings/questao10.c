#include <stdio.h>
#include <string.h>

int main() {
	
	char string[100];
	int tam, i, j;
	int igual = 1;
	
	
	printf("Digite uma string para que eu possa verificar se ela eh um palindromo ou nao:\n");
	gets(string);
	
	tam = strlen(string);
	
	for(i = 0; i < tam; i++) {
		if(string[i] >= 65 && string[i] <= 90) {
			string[i] = string[i] + 32;
		} else
		if(string[i] == ' ') {
			for(j = i; j < tam; j++) {
				string[j] = string[j + 1];
			}
		}
	}
	
	printf("\nTransform: %s", string);
	
	tam = strlen(string);
	
	for(i = 0, j = tam - 1; i <= j; i++, j--) {
		if(string[i] != string[j]) {
			printf("\nDiferente!");
			igual = 0;
			i = j + 1;
		}
	}
	
	if(igual == 1) {
		printf("\nEh palindromo!");
	} else {
		printf("\nNao eh palindromo!");
	}
	
	return 0;
}
