#include <stdio.h>
#include <string.h>

int main() {
	
	char palavra[50];
	int i = 0;
	
	printf("Digite uma palavra (maximo de 50 letras):\n");
	gets(palavra);
	
	while(palavra[i] != '\0') {
		palavra[i] = palavra[i] + 1;
		i++;
	}
	
	printf("\nA string resultante eh: %s", palavra);
	
	return 0;
}
