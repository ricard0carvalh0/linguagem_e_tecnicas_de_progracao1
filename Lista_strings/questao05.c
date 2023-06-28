#include <stdio.h>
#include <string.h>

int main() {
	
	char vogais[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
	char palavra[100];
	char caractere;
	int totalvogais = 0;
	int i, j;
	
	printf("Digite uma palavra qualquer:\n");
	gets(palavra);
	printf("Digite um caractere (vogal ou consoante) para substituir as vogais dessa palavra:\n");
	scanf("%c", &caractere);
	
	for(i = 0; i < 100 && palavra[i] != '\0'; i++) {
		for(j = 0; j < 10; j++) {
			if(palavra[i] == vogais[j]) {
				totalvogais = totalvogais + 1;
				palavra[i] = caractere;
			}	
		}
	}
	
	printf("\nEssa palavra tem %d vogais.", totalvogais);
	printf("\nSubstituindo, essa palavra fica assim: %s", palavra);
	
	return 0;
}
