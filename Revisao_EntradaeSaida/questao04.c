#include <stdio.h>

int main() {
	
	float saldo, novoSaldo;
	
	printf("Digite o saldo da sua poupanca:\n");
	scanf("%f", &saldo);
	
	novoSaldo = saldo + ((saldo * 2) / 100);
	
	printf("Com o reajuste de 2 porcento, seu novo saldo eh: %f", novoSaldo);
	
	return 0;
}
