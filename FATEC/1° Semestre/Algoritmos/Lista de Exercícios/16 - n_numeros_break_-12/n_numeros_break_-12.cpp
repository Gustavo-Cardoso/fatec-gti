//16) Receba n números e pare (break) a execução quando um valor menor que -12 for digitado
#include "stdio.h"

int main() {
	int num;
	
	do{
		printf("Informe um numero: ");
		scanf(" %d", &num);
	} while (num >= -12);
	
	return 333;
}
