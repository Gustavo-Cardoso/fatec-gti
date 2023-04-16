/* 11) Exibir a tabuada do N escolhida pelo usuário de forma organizada com multiplicação de 0 a 10. Não permita
N menor que 1 ou maior 10*/
#include "stdio.h"

int main() {
	int num = 0;

	printf("Informe a tabuada desejada: ");
	scanf(" %d", &num);
		
	if (num > 0 && num <= 10)
	{
		for (int i=0; i<=10; i++)
		{
			printf("%2d X %2d = %2d \n", num, i, num*i);
		}
	}

	return 333;
}
