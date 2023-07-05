#include <stdio.h>

int main() {
	
	float X, Y, Z;
	
	printf("Digite um lado do triangulo:\n");
	scanf("%f", &X);
	printf("Digite um outro lado do triangulo:\n");
	scanf("%f", &Y);
	printf("Digite o ultimo lado do triangulo:\n");
	scanf("%f", &Z);
	
	if(X == Y && Y == Z) {
		printf("Esse traingulo eh Equilatero.");
	} else if(X == Y && Y != Z || X == Z && Z != Y || Z == Y && Y != X) {
		printf("Esse triangulo eh Isosceles.");
	} else if(X != Y && Y != Z && X != Z) {
		printf("Esse triangulo eh Escaleno.");
	}
	
	return 0;
}
