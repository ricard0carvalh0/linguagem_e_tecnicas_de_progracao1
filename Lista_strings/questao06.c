#include <stdio.h>
#include <string.h>

int main() {
	
	char frase[100];
	int i = 0;
	int j = 0;
	int total = 0;
	
	printf("Digite uma frase:\n");
	gets(frase);
	
	for(i = 0; i < 100 && frase[i] != '\0'; i++) {
		if(frase[i] == ' ') {
			total = total + 1;
		}
	}	
	
	printf("\nEssa frase tem %d espacos.", total);
	
	i = 0;
	while (frase[i] != '\0') {
        if (frase[i] != ' ') {
            frase[j] = frase[i];
            j++;
        }
        i++;
    }
    frase[j] = '\0';

    printf("\nFrase sem espacos em branco: %s\n", frase);
	
	return 0;
}
