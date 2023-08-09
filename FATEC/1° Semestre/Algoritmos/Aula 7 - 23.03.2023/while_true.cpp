#include <stdio.h>

int main()
{
	char resp = 's';
	while (resp == 's' || resp =='S')
	{
		printf("Digite s para continuar:");
		scanf(" %c", &resp);
	}	
}
