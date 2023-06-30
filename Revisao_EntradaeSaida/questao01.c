#include <stdio.h>

int main() {
	
	int numero1, numero2, numero3, media;
	
	printf("Digite um primeiro numero:\n");
	scanf("%d", &numero1);
	printf("Digite um segundo numero:\n");
	scanf("%d", &numero2);
	printf("Digite um terceiro numero:\n");
	scanf("%d",&numero3);
	
	media = (numero1 + numero2 + numero3) / 3;
	printf("A media desses tres numeros eh: %d", media);
	
	return 0;
}
