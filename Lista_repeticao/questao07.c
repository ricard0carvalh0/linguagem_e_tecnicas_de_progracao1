#include <stdio.h>

int main() {
	
	int num, auxiliar;
	int soma = 0;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	while(num > 0) {
		auxiliar = num % 10;
		soma = soma + auxiliar;
		num = num / 10;
		if(num == 0 && soma >= 10) {
			num = soma;
			soma = 0;
		}
	} 
	
	printf("\nO codigo verificador eh: %d", soma);
	
	getchar();
	return 0;
}
