/* 12) Exibir na tela os números acrescidos de 2 em 2 dentro da faixa (primeiro e último) estabelecida pelo usuário.
Não permita a inserção de 2 números iguais */
#include "stdio.h"

int main() {
	int num1 = 0, num2 = 0;
	
	printf("Informe o primeiro numero:\n");
	scanf(" %d", &num1);
	do {
		printf("Informe o segundo numero:\n");
		scanf(" %d", &num2);
	} while (num1 == num2);

	for(int i = num1; i <= num2; i=i+2)
	{
		printf("%d\n", i);
	}

	
	return 333;
}
