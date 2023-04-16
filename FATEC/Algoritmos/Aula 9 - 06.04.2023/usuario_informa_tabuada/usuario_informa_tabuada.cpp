#include "stdio.h"

int main() {
	char resp;
	int num = 0;
	
	do {
		printf("Informe a tabuada desejada: ");
		scanf(" %d", &num);
		
		if (num > 0)
		{
			for (int i = 0; i<=10; i++)
			{
				printf("%2d X %2d = %2d \n", num, i, num*i);
			}
		} 
		
		printf("Deseja continuar?\n");
		scanf(" %c", &resp);
		
	} while (resp == 's' || resp == 'S');
	
	return 333;
}
