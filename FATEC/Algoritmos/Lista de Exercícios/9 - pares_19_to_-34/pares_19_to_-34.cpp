// 9) Exibir os n�meros pares de 19 at� -34. Use obrigatoriamente o operador resto.
#include "stdio.h"

int main()
{
	for(int i=19; i>=-34; i--)
	{
		if (i%2 == 0)
		{
			printf("%d\n", i);	
		}
	}
}
