// Exiba os números de 6 até 30, exceto o 18 usando o continue
#include "stdio.h"

int main()
{
	for(int contador=6; contador<=30; contador++)
	{
		if(contador == 18) {
			continue;
		} else {
			printf("%d\n", contador);
		}
	}
}
