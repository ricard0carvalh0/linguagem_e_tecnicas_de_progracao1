#include <stdio.h> 

int main() {
	
	float n1, n2, n3, media, maior_media, menor_media, num_medias, media_turma;
	float total_media = 0;
	int contador = 2;
	int resposta;
	
	while (contador != 0) {
		printf("Digitar a primeira nota do aluno: ");
		scanf("%f", &n1);
		printf("Digite a segunda nota do aluno: ");
		scanf("%f", &n2);
		printf("Digite a terceira nota do aluno: ");
		scanf("%f", &n3);
		media = (n1 + n2 + n3) / 3;
		if(contador == 2) {
			maior_media = media;
			menor_media = media;
		} else
		if(media > maior_media) {
			maior_media = media;
		} else
		if(media < menor_media) {
			menor_media = media;
		}
		
		printf("\nDeseja adicionar notas de outro aluno? (sim(1) nao(0))");
		scanf("%d", &resposta);
		
		total_media = total_media + media;
		num_medias = num_medias + 1;
		media_turma = total_media / num_medias;
		contador = resposta;
	}
	
	printf("\nA maior media foi: %f", maior_media);
	printf("\nA menor media foi: %f", menor_media);
	printf("\nA media da turma eh: %f", media_turma);
	
	getchar();
	return 0;
}
