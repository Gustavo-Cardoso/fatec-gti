// Receba n n�meros e pare (break) a execu��o quando um valor maior que 30 for digitado
#include "stdio.h"

int main()
{
	int num = 0;
	for(int i = 0; i >= 0; i++)
	{
		printf("Infomre um numero: ");
		scanf(" %d", &num);
		
		if (num > 30)
		{
			break;
		}		
	}
	return 333;
}
