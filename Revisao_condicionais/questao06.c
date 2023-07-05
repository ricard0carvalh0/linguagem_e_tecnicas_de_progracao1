#include <stdio.h>

int main() {
	
	int velocidadeMaxima, velocidadeMotorista, multa;
	
	printf("Qual eh o limite de velocidade?\n");
	scanf("%d", &velocidadeMaxima);
	printf("Qual a velocidade do motorista?\n");
	scanf("%d", &velocidadeMotorista);
	
	if(velocidadeMotorista > velocidadeMaxima) {
		multa = (velocidadeMotorista - velocidadeMaxima) * 5;
		printf("\nPaga multa de %d R$", multa);
	} else {
		printf("\nNao ha multa a ser paga.");
	}
	
	return 0;
}
