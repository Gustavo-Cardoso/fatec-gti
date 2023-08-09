#include "stdio.h"

int main(){
	float num1, num2, conta;
	int opcao;
	
	printf("Informe o primeiro numero:\n");
	scanf(" %f", &num1);
	printf("Informe o segundo numero:\n");
	scanf(" %f", &num2);
	
	printf("Escolha um opcao abaixo\n");
	printf("1 - Soma\n");
	printf("2 - Subtracao\n");
	printf("3 - Divisao\n");
	printf("4 - Multiplicao\n");
	scanf(" %d", &opcao);
	
	switch(opcao)
	{
		case 1:
			conta = num1 + num2;
			printf("Opcao seleciona: SOMA.\n Os numeros informados foram:\n Num1: %.2f\n Num2: %.2f\n total = %.2f", num1, num2, conta);
			break;
		case 2:
			conta = num1 - num2;
			printf("Opcao seleciona: SUBTRACAO.\n Os numeros informados foram:\n Num1: %.2f\n Num2: %.2f\n total = %.2f", num1, num2, conta);
			break;
		case 3:
			if(num2 != 0)
			{
				conta = num1 / num2;
				printf("Opcao seleciona: DIVISAO.\n Os numeros informados foram:\n Num1: %.2f\n Num2: %.2f\n total = %.2f", num1, num2, conta);
			} else {
				printf("Nao eh possivel dividir por zero!");
			}
			break;
		case 4:
			conta = num1 * num2;
			printf("Opcao seleciona: MULTIPLICACAO.\n Os numeros informados foram:\n Num1: %.2f\n Num2: %.2f\n total = %.2f", num1, num2, conta);
			break;
		default:
			printf("Opcao seleciona invalida!");			
	}
	
	return 333;
}
