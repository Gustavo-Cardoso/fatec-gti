#include "stdio.h"

int main() {
	char tipoConta, icone;
	int resp, n1, n2, result;
	
	printf(" Selecione uma das opções abaixo: \n");
	printf(" 1 - Adicao                       \n");
	printf(" 2 - Subtracao                    \n");
	printf(" 3 - Multiplicacao                \n");
	printf(" 4 - Divisao                      \n");
	scanf(" %d", &resp);
	
	printf("Informe o primeiro valor: \n");
	scanf(" %d", &n1);
	printf("Informe o segundo valor: \n");
	scanf(" %d", &n2);
	
	if (resp == 1) {
		result = n1 + n2;
	} else if (resp == 2) {
		result = n1 - n2;
	} else if (resp == 3) {
		result = n1 * n2;
	} else if (resp == 4) {
		if (n1 == 0)
		{
			printf("Nao eh possivel dividir por zero");
		}
		result = n1 / n2;
	} else {
		printf("Opcao informa invalida");
	}
	
	printf("%d",result);
	
	return 333;
}
