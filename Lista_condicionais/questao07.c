#include <stdio.h> 

int main() {
	
	float valor_compra, valor_pagar;
	int codigo;
	
	printf("Digite o valor da compra:\n");
	scanf("%f", &valor_compra);
	printf("\nDigite o codigo de pagamento:\n");
	scanf("%d", &codigo);
	
	switch (codigo) {
		
		case 1 :
			valor_pagar = valor_compra - ((valor_compra * 8) / 100);
			printf("\nDevera ser pago: %f reais.", valor_pagar); break;
			
		case 2 :
			valor_pagar = valor_compra - ((valor_compra * 4) / 100);
			printf("\nDevera ser pago: %f reais, no cartao de credito.", valor_pagar); break;
			
		case 3 :
			valor_pagar = valor_compra / 2;
			printf("\nDevera ser pago em 2x de: %f reais.", valor_pagar); break;
			
		case 4 :
			valor_pagar = (valor_compra / 4) + ((valor_compra * 8) / 100);
			printf("\nDevera ser pago em 4x de: %f reais.", valor_pagar); break;
			
		default :
			printf("\nOpcao invalida."); 
			
	}
	
	getchar();
	return 0;
}
