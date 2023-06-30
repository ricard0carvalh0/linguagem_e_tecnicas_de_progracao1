#include <stdio.h>

int main() {
	
	float C, F;
	
	printf("Digite a temperatura em graus Centigrados:\n");
	scanf("%f", &C);
	
	F = (9 * C + 160) / 5;
	
	printf("A temperatura em Fahrenheit eh: %f", F);
	
	return 0;
}
