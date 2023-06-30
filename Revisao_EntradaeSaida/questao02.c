#include <stdio.h>

int main() {
	
	float numero1, numero2, soma, subtracao, multiplicacao, divisao;
	
	printf("Digite o primeiro numero:\n");
	scanf("%f", &numero1);
	printf("Digite o segundo numero:\n");
	scanf("%f", &numero2);
	
	soma = numero1 + numero2;
	subtracao = numero1 - numero2;
	multiplicacao = numero1 * numero2;
	divisao = numero1 / numero2;
	
	printf("A soma desses numeros eh: %f\n", soma);
	printf("A subtracao desses numeros eh: %f\n", subtracao);
	printf("A multiplicacao desses numeros eh: %f\n", multiplicacao);
	printf("A divisao desses numeros eh: %f\n", divisao);
	
	return 0;
	
}
