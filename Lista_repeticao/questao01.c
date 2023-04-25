#include <stdio.h>

int main() {
	
	int cont = 0; //contador
	float num, maior_valor, menor_valor; //num = valor real
	
	while (cont < 15) {
		printf("Digite um valor real: ");
		scanf("%f", &num);
		if(cont == 0) {
			maior_valor = num;
			menor_valor = num;
		} else 
		if(num > maior_valor) {
			maior_valor = num;
		} else
		if(num < menor_valor) {
			menor_valor = num;
		}
		cont++;
	}
	
	printf("\nO maior valor digitado foi: %f", maior_valor);
	printf("\nO menor valor digitado foi: %f", menor_valor);
	
	getchar();
	return 0;
}
