#include <stdio.h>
#include <locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float n1, n2 = 0;
	
	printf("Informe o primeiro número:\n");
	scanf("%f", &n1);
	fflush(stdin);
	printf("Informe o segundo número:\n");
	scanf("%f", &n2);
	
	if (n1 > n2)
	{
		printf("%.2f é maior que %.2f", n1,n2);	
	} else if (n1 < n2)
	{
		printf("%.2f é maior que %.2f", n2,n1);	
	} else 
	{
		printf("%.2f é igual %.2f", n1,n2);	
	}
	
	return 333;
	
}
