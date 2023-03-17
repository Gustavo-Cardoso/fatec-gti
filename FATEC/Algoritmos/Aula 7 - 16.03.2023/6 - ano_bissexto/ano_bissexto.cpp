#include <stdio.h>
#include <locale>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int ano, resto = 0;
	
	printf("Informe o ano:");
	scanf("%d", &ano);
	
	resto = ano % 4;
	
	if(resto == 0)
	{
		printf("O ano %d é bissexto", ano);
	} 
	else
	{
		printf("O ano %d não é bissexto", ano);	
	} 
	
	return 333;
}
