#include <stdio.h>

int main()
{
	int i = 47;
	int resto = 0; 
	
	while (i >= 2)
	{
		resto = i % 2;
		
		if (resto == 1)
		{
			printf("%d\n", i);		
		}
		
		i--;
	}
		
	return 333;
}
