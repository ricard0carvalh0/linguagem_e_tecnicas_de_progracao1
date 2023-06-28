#include <stdio.h>
#include <string.h>

int main() {
	
	char string[100];
	int i = 0;
	
	printf("Digite uma cadeia de caracteres:\n");
	gets(string);
	
	while(string[i] != '\0'){
		if(string[i] >= 97 && string[i] <= 122) {
			string[i] = string[i] - 32;
		}
		i++;
	}
	
	printf("\nConvertendo todos esses caracteres em letras maiusculas fica: %s", string);
	
	return 0;
}
