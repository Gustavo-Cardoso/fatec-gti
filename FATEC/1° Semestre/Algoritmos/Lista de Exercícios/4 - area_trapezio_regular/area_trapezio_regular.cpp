// 4) Criar programa que calcule a �rea do trap�zio regular.
#include "stdio.h"
#include "locale.h"

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float baseMenor = 0, baseMaior = 0, altura = 0, area = 0;
	
	printf("Informe o valor da base maior: \n");
	scanf(" %f", &baseMaior);
	printf("Informe o valor da base menor: \n");
	scanf(" %f", &baseMenor);
	printf("Informe o valor da altura: \n");
	scanf(" %f", &altura);
	
	area = ((baseMaior + baseMenor) * altura) / 2;
	
	printf("�rea do trap�zio: %.2f", area);
	
	return 333;
}
