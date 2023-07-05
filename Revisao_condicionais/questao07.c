#include <stdio.h>

int main() {
	
	int horas, valorHora, total, totalSemAcrescimo;
	
	printf("Quantas horas na semana voce trabalha?\n");
	scanf("%d", &horas);
	printf("Quanto voce recebe por hora trabalhada?\n");
	scanf("%d", &valorHora);
	
	if (horas > 60) {
		total = horas * (valorHora + ((valorHora * 100) / 100));
		printf("Voce ira receber um total de: %d", total);
	} else if (horas > 40 && horas <= 60) {
		total = horas * (valorHora + ((valorHora * 50) / 100));
		printf("Voce ira receber um total de : %d", total);
	} else if (horas <= 40) {
		totalSemAcrescimo = horas * valorHora;
		printf("Voce nao tem acrescimo de hora nenhum, ganahndo apenas: %d.", totalSemAcrescimo);
	}
	
	return 0;
}
