#include <stdio.h>

int main() {
	
	int quantLados;
	float lado, area; 
	
	printf("Digite quantos lados tem o poligono:\n");
	scanf("%d", &quantLados);
	printf("Digite qual o tamanho desses lados:\n");
	scanf("%f", &lado);
	
	if (quantLados == 3) {
		area = lado * lado * 1.73 / 4;
		printf("\nA area desse triangulo eh: %f", area);
	} else if (quantLados == 4) {
		area = lado * lado;
		printf("\nA area desse quadrado eh: %f", area);
	} else if (quantLados == 6) {
		area = 6 * lado * lado * 1.73 / 4;
		printf("\nA area desse hexagono eh: %f", area);
	} else {
		printf("\nNao sei calcular a area.");
	}
	
	return 0;
}
