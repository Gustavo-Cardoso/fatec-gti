//14) Receba 3 números e indique o maior deles. Não permita inserção de 3 números iguais

#include "stdio.h"

int main() {
	float num1 = 0, num2 = 0, num3 = 0;
	
	printf("Informe o primeiro numero:\n");
	scanf(" %f", &num1);
	printf("Informe o segundo numero:\n");
	scanf(" %f", &num2);
//	printf("Informe o terceiro numero:\n");
//	scanf(" %f", &num3);
	do {
		printf("Informe o terceiro numero:\n");
		scanf(" %f", &num3);
	} while (num1 == num3 || num2 == num3);
	
	if (num1 > num2 && num1 > num3){
		printf("O primeiro numero eh o maior de todos");
	} else if (num2 > num1 && num2 > num3){
		printf("O segundo numero eh o maior de todos");
	} else if (num3 > num1 && num3 > num2){
		printf("O terceiro numero eh o maior de todos");
	} else if ((num1 == num2) && num1 > num3 && num2 > num3) {
		printf("O primeiro e segundo numeros sao os maiores");
	} else if ((num1 == num3) && num1 > num2 && num3 > num2) {
		printf("O primeiro e terceiro numeros sao os maiores");
	} else if ((num2 == num1) && num2 > num3 && num1 > num3) {
		printf("O primeiro e segundo numeros sao os maiores");
	} else if ((num2 == num3) && num2 > num1 && num3 > num1) {
		printf("O segundo e terceiro numeros sao os maiores");
	} else if ((num3 == num1) && num3 > num2 && num1 > num2) {
		printf("O primeiro e terceiro numeros sao os maiores");
	} else {
		printf("O segundo e terceiro numeros sao os maiores");
	}
	
	return 333;
}
