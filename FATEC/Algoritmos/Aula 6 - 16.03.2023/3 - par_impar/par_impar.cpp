#include <stdio.h>
#include <locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num, resto = 0;
	
	printf("Informe um n�mero:\n");
	scanf("%d", &num);
	
	resto = num % 2;
	
	if (resto == 0)
	{
		printf("%d � par", num);
	} 
	else 
	{
		printf("%d � �mpar", num);
	}
	
	return 333;
}
