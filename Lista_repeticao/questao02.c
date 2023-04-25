#include <stdio.h>

int main() {
	
	int fator1, fator2, produto; 
	
	for(fator1 = 1; fator1 <= 10; fator1++) {
		printf("\n");
		for(fator2 = 0; fator2 <=10; fator2++) {
			produto = fator1 * fator2;
			printf("\n%d x %d = %d", fator1, fator2, produto);
		}
	}
	getchar();
	return 0;
}
