#include <stdio.h>

int main() {
	
	char str1[100], str2[100];
	int i = 0;
	int flag = 0;
	
	printf("Digite a primeira string: ");
	scanf("%s", str1);
	
	printf("\nDigite a segunda string: ");
	scanf("%s", str2);
	
	while(str1[i] != '\0' && str2[i] != '\0') {
		i++;
	}
	
	if(str1[i] != str2[i]) {
		printf("\nAs strings sao diferentes.");
		return 0;
	}
	
	for(i = 0; str1[i] != '\0'; i++) {
		if(str1[i] != str2[i]) {
			flag = 1;
			break;
		}
	}
	
	if(flag == 0) {
		printf("\nAs strings sao iguais.");
	} else {
		printf("\nAs strings sao diferentes.");
	}
	
	return 0;
}
