#include <stdio.h>
#include <locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num, resto = 0;
	
	printf("Informe um número:\n");
	scanf("%d", &num);
	
	resto = num % 2;
	
	if (resto == 0)
	{
		printf("%d é par", num);
	} 
	else 
	{
		printf("%d é ímpar", num);
	}
	
	return 333;
}
