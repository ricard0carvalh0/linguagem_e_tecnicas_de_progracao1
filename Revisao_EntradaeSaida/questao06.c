#include <stdio.h>

int main() {
	
	float segundos, minutos, horas;
	
	printf("Digite o tempo em segundos:\n");
	scanf("%f", &segundos);
	
	minutos = segundos / 60;
	horas = minutos / 60;
	
	printf("Esse tempo em minutos eh: %f\n", minutos);
	printf("Esse tempo em horas eh: %f", horas);
	
	return 0;
}
