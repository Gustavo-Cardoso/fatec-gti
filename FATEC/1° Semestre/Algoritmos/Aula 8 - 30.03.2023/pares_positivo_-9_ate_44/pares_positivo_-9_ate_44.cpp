// Exiba na tela apenas os n�meros pares positivos de -9 a 44 usando o la�o for
#include "stdio.h"

int main()
{
	for(int i=-9; i<=44; i++)
	{
		if (i%2 == 0)
		{
			printf("%d\n", i);	
		}
	}
}
