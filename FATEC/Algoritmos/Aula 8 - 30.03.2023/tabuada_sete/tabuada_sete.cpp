// Exiba a tabuada do 7 usando o laço for (0 a 70). Ex: 7 x 1  = 7  7 x 2 = 14  etc 
#include "stdio.h"

int main() {
	int num = 7;
	for (int i = 0; i<=10; i++)
	{
		printf("%2d X %2d = %2d \n", num, i, (num*i));
	}
	
	return 333;
}
