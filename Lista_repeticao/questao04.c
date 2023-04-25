#include <stdio.h>

int main() {
	 
	 float massa_inicial, massa_final, tempo_minutos, tempo_segundos, tempo_horas;
	 int tempo = 0;
	 
	 printf("Digite a massa inicial do elemento: ");
	 scanf("%f", &massa_inicial);
	 printf("\nA massa inicial era: %f", massa_inicial);
	 	 
	 while (massa_inicial >= 0.5) {
	 	
	 	massa_inicial = massa_inicial * 0.5;
	 	tempo = tempo + 1;
	 }
	 
	 massa_final = massa_inicial;
	 
	 tempo_segundos = tempo * 50;
	 tempo_minutos = tempo * 0.84;
	 tempo_horas = tempo * 0.014;
	 
	 printf("\nMassa final: %f", massa_final);
	 printf("\nTempo em segundos: %f", tempo_segundos);
	 printf("\nTempo em minutos : %f", tempo_minutos);
	 printf("\nTempo em horas: %f", tempo_horas);
	 
	 getchar();
	 return 0;
}
