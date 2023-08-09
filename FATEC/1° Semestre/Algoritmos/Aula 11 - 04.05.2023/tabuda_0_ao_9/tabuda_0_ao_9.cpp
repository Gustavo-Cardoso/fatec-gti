#include "stdio.h"

int main(){
	for(int i = 1; i <= 9; i++)
	{
		printf("------------------------------------\n");
		printf("Tabuada do %d\n", i);
		for(int j = 0; j <= 10; j++)
		{
			printf("%d X %d = %d \n", i, j, i*j);
		}
	}
	printf("------------------------------------\n");
	
	return 333;
}
