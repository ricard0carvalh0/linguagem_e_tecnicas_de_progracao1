#include <stdio.h>

int main() {
	
	int codigo;
	float aq, lado, ar, base, altura, at, base_menor, base_maior, alturat, ac, raio, cc, raioc;
	
	printf("Esses sao os codigos para calcular deteminada medida de determinado poligono:\n");
	printf("1) Area do quadrado.\n");
	printf("2) Area do retangulo.\n");
	printf("4) Area do trapezio.\n");
	printf("5) Area do circulo.\n");
	printf("5) Circunferencia do circulo.\n");
	printf("Qual medida de qual poligono voce quer calcular?\n");
	scanf("%d", &codigo);
	
	switch (codigo) {
		
		case 1 :
			printf("Digite o lado do quadrado:\n");
			scanf("%f", &lado);
			aq = lado * lado;
			printf("\nA area do quadrado eh: %f", aq); break;
			
		case 2 :
			printf("\nDigite a base do retangulo:\n");
			scanf("%f", &base);
			printf("Digite a altura do retangulo:\n");
			scanf("%f", &altura);
			ar = base * altura;
			printf("\nA area do retangulo eh: %f", ar); break;
			
		case 3 :
			printf("\nDigite a base maior do trapezio:\n");
			scanf("%f", &base_maior);
			printf("Digite a base menor do trapezio:\n");
			scanf("%f", &base_menor);
			printf("Digite a altura do trapezio:\n");
			scanf("%f", &alturat);
			at = ((base_maior + base_menor) * alturat) / 2;
			printf("\nA area do trapezio eh: %f", at); break;
			
		case 4 :
			printf("\nDigite o raio do circulo:\n");
			scanf("%f", &raio);
			ac = 3.14 * (raio * raio);
			printf("\nA area do circulo eh: %f", ac); break;
			
		case 5 :
			printf("\nDigite o raio da circunferencia:\n");
			scanf("%f", &raioc);
			cc = 2 * 3.14 * raioc;
			printf("\nA circunferencia desse circulo eh: %f", cc); break;
			
		default :
			printf("Esse codigo nao existe.");
	}
	
	getchar();
	return 0;
}
