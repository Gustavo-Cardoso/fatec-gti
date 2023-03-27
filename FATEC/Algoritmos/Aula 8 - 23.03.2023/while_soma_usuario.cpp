#include <stdio.h>

int main()
{
	int soma, num = 0;
	char resp = 's';
		
	while (resp == 's' || resp == 'S')
	{
		printf("Digite numero inteiro:");
		scanf(" %d", &num);
		soma = soma + num;
		
		printf("Digite s para continuar:");
		scanf(" %c", &resp);				
	}	
	
	printf("%d", soma);
	
	return 333;
}
