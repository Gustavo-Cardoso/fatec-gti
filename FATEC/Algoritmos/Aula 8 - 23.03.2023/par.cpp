#include <stdio.h>

int main()
{
	int i = -9;
	int resto = 0; 
	
	while (i <= 18)
	{
		resto = i % 2;
		
		if (resto == 0)
		{
			printf("%d\n", i);		
		}
		
		i++;
	}
		
	return 333;
}
