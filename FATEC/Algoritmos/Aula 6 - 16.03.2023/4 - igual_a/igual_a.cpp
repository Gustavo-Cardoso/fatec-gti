#include <stdio.h>
#include <locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float n1,n2 = 0;
	
	printf("Informe o primeiro número\n");
	scanf("%f", &n1);
	fflush(stdin);
	printf("Informe o segundo número\n");
	scanf("%f", &n2);
	
	if (n1 == n2)
	{
		printf("O %.2f é igual a %.2f", n1,n2);
	}
	else
	{
		printf("O %.2f é diferente de %.2f", n1,n2);
	}
	
	return 333;
}
