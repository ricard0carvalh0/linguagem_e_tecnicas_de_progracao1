#include <stdio.h> 

int main() {
	
	int codigo;
	
	printf("Digite o codigo do produto:\n");
	scanf("%d", &codigo);

	if(codigo == 1) {
		printf("\nAlimento nao pericivel.");
	}
	else if(codigo == 2 || codigo == 3 || codigo == 4) {
		printf("\nAlimento pericivel.");
	}
	else if(codigo == 5 || codigo == 6) {
		printf("\nVestuario.");
	}
	else if(codigo >= 7 && codigo <= 12) {
		printf("\nLimpeza.");
	}
	else {
		printf("\nOpcao invalida.");
	}
	
	getchar();
	return 0;
}
