#include <stdio.h>
#include <string.h>

int main() {
	
	char numeros[100];
	int i;
	int total = 0;
	
	printf("Digite 0's e 1's (quantos e em que ordem quiser):\n");
	gets(numeros);
	
	for(i = 0; i < 100 && numeros[i] != '\0'; i++) {
		numeros[i];
		if(numeros[i] == '1') {
			total = total + 1;
		} 
	}
	
	printf("\nExistem %d numeros 1 entre todos que voce escreveu!", total);
	
	return 0;
}
