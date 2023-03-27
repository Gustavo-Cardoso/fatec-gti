#include <stdio.h>

int main()
{
	int i = 0;
	char resp;
	
	printf("Outro numero?");
	scanf(" %c\n", &resp);
	
	if(resp != 's')
	{
		printf("Break acionado!");
		break;
	}
	
	return 333;
}
