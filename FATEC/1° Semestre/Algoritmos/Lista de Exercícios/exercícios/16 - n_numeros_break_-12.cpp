//16) Receba n n�meros e pare (break) a execu��o quando um valor menor que -12 for digitado
#include "stdio.h"

int main() {
	int num;
	
	do{
		printf("Informe um numero: ");
		scanf(" %d", &num);
	} while (num >= -12);
	
	return 333;
}
