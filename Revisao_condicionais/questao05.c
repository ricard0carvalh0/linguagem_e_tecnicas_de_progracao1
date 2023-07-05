#include <stdio.h>

int main() {
	
	float nota1, nota2, media, examefinal, aprovadoFinal;
	
	printf("Digite a primeira nota do aluno (de 0 a 100):\n");
	scanf("%f", &nota1);
	printf("Digite a segundo nota do aluno (de 0 a 100):\n");
	scanf("%f", &nota2);
	media = (nota1 + nota2) / 2;
	
	if(media >= 70) {
		printf("Aluno aprovado.");
	} else if (media >= 40 && media <= 69) {
		printf("Aluno em exame final.\n");
		printf("Digite a nota do exame final:\n");
		scanf("%f", &examefinal);
		aprovadoFinal = media + examefinal;
		if(aprovadoFinal > 100) {
			printf("\nAprovado no exame final.");
		} else {
			printf("\nReprovado no exame final.");
		}
	} else {
		printf("Aluno reprovado.");
	}
	
	return 0;
}
