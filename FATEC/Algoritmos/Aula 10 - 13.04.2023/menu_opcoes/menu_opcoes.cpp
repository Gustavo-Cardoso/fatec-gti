#include "stdio.h"

int main(){
	
	int opcao;
	float base = 0, altura = 0, baseMaior = 0, baseMenor = 0, pi = 3.14, raio = 0;
	
	printf("************ MENU **************\n");
	printf("*** 1 - Area do quadrado     ***\n");
	printf("*** 2 - Area do retangulo    ***\n");
	printf("*** 3 - Area do trapezio     ***\n");
	printf("*** 4 - Area do circulo      ***\n");
	printf("********************************\n");
	
	printf("Selecione uma opcao:\n");
	scanf(" %d", &opcao);
	
	switch(opcao)
	{
		case 1:
			printf("Opcao selecioda: Quadrado\n");
			printf("Informe a base:\n");
			scanf(" %f", &base);
			printf("Informe a altura:\n");
			scanf(" %f", &altura);
			
			printf("A area do quadrado eh %.2f", base*altura);		
			break;
		case 2:
			printf("Opcao selecioda: Retangulo\n");
			printf("Informe a base:\n");
			scanf(" %f", &base);
			printf("Informe a altura:\n");
			scanf(" %f", &altura);
			
			printf("A area do retangulo eh %.2f", base*altura);
			break;
		case 3:
			printf("Opcao selecioda: Trapezio\n");
			printf("Informe a base maior:\n");
			scanf(" %f", &baseMaior);
			printf("Informe a base menor:\n");
			scanf(" %f", &baseMenor);
			printf("Informe a altura:\n");
			scanf(" %f", &altura);
			
			printf("A area do quadrado eh %.2f", ((baseMaior+baseMenor)*altura)/2);
			break;
		case 4:
			printf("Opcao selecioda: circulo\n");
			printf("Informe o raio:\n");
			scanf(" %f", &raio);
			
			printf("A area do circulo eh %.2f", (pi*(raio*raio)));
			break;
		default:
			printf("Opcao selecionada invalida");
	}
	return 333;
}
