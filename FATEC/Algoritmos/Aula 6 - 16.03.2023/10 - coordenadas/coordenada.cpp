#include <stdio.h>
#include <locale>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int x, y = 0;
	
	printf("Informe a primeira coordenada\n");
	scanf("%d", &x);
	fflush(stdin);
	printf("Informe a segunda coordenada\n");
	scanf("%d", &y);
	
	if (x < 0)
	{
		if (y < 0)
		{
			printf("Quadrante C");
		}
		else
		{
			printf("Quadrante A");
		}
	}
	else
	{
		if (y < 0)
		{
			printf("Quadrante D");
		}
		else
		{
			printf("Quadrante B");
		}
	}
	
	return 333;
}
