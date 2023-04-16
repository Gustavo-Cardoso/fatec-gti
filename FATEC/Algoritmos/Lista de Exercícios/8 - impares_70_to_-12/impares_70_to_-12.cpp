// Criar programa que receba um número inteiro qualquer, calcule e exiba o antecessor e o sucessor do mesmo
#include "stdio.h"

int main(){
	
	for(int i = 70; i >= -12; i--)
	{
		if(i == 1)
		{
			continue;
		} else {
			if(i%2 == 1)
			{
				printf("%d\n",i);
			}
		}
	}
	
	return 333;
}
