//6) Criar um programa que calcule o IMC da pessoa, baseado em seu sexo e o categorize em 5 faixas
#include <stdio.h>

int main(){
	float peso, altura, imc = 0;
	
	printf("Informe sua peso em kg:\n");
	scanf("%f", &peso);
	fflush(stdin);
	printf("Informe sua altura:\n");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	if (imc < 18.5){
		printf("Abaixo do peso");
	} else if (imc >= 18.5 && imc <= 24.9){
		printf("Peso  normal");
	} else if (imc >= 25 && imc <= 29.9){
		printf("Excesso de peso");
	} else if (imc >= 30 && imc <= 34.9){
		printf("obesidade classe I");
	} else {
		printf("obesidade classe II");
	}
	
	return 333;
}
