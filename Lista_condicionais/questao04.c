#include <stdio.h>	

int main() {
	
	char poligono, c, q, r;
	float ac, pc, raio, aq, pq, lado, ar, pr, base, altura;
	
	//escolha do poligono
	printf("Digite se quer calcular as medidas de um circulo, quadrado ou retangulo:\n");
	scanf("%c", &poligono);
	
	switch (poligono) {
		
		case 'c' :
			printf("Digite o raio do circulo:\n");
			scanf("%f", &raio);
			ac = 3.14 * (raio * raio);
			printf("\nA area desse circulo eh: %f", ac);
			pc = 2 * raio * 3.14;
			printf("\nO perimetro desse circulo eh: %f", pc); break;
		
		case 'q' :
			printf("\nDigite o lado do quadrado:\n");
			scanf("%f", &lado);
			aq = lado * lado;
			printf("\nA area do quadrado eh: %f", aq);
			pq = 4 * lado;
			printf("\nO perimetro do quadrado eh: %f", pq); break;
			
		case 'r' :
			printf("Digite a base do retangulo:\n");
			scanf("%f", &base);
			printf("Digite a altura do retangulo:\n");
			scanf("%f", &altura);
			ar = base * altura;
			printf("\nA area desse retangulo eh: %f", ar);
			pr = (base + base) + (altura + altura);
			printf("\nO perimetro desse retangulo eh: %f", pr); break;
			
		default :
			printf("\nPoligono nao encontrado.");
	}
	
	getchar();
	return 0;
}
