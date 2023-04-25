#include <stdio.h> 

int main() {
	
	float peso, altura, imc;
	
	printf("Digite seu peso:\n");
	scanf("%f", &peso);
	printf("\nDigite sua altura:\n");
	scanf("%f", &altura);
	
	//calculando o indice de massa corporal (imc)
	imc = peso / (altura * altura);
	
	if (imc <= 18.5) {
		printf("\nO seu peso esta abaixo do normal.");
	}
	else if (imc > 18.5 && imc <= 25) {
		printf("\nO seu peso esta normal.");
	}
	else if (imc > 25 && imc <= 30) {
		printf("\nO seu peso esta acima do normal.");
	}
	else if (imc > 30) {
		printf("\nVoce esta com um peso excessivo.");
	}
	
	getchar();
	return 0;
}
