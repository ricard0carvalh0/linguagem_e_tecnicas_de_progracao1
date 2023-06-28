#include <stdio.h>
#include <string.h>

int main() {
	
	char string[100];
	int i = 0;
	
	printf("Digite uma string:\n");
	gets(string);
	
	while(string[i] != '\0') {
		if(string[i] >= 97 && string[i] <= 122) {
			string[i] = string[i] - 32;
			string[i] = string[i] + 3;
		}
		i++;
	}
	
	
	printf("\nAplicando o Codigo de Cesar nessa string, teremos: \n%s", string);
	
	return 0;
}
