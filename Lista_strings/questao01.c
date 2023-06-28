#include <stdio.h>
#include <string.h>

int main() {
	
	char nome[100];
	int i;
	int tamanho = 0;
	
	printf("Digite o seu nome:\n");
	gets(nome);
	
	for(i = 0; i < 100 && nome[i] != '\0'; i++) {
		nome[i];
		tamanho++;
	}
	
	if(tamanho >= 4) {
		printf("\nAs quatro primeiras letras do seu nome sao:\n");
		for(i = 0; i < 4; i++) {
			printf("%c", nome[i]);
		}
	} else {
		printf("\nO seu nome nao possui um minimo de 4 letras.");
	}
	
	return 0;
}
