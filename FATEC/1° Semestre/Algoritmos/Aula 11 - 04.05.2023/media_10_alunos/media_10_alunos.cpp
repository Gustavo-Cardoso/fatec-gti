#include "stdio.h"

int main(){
	float p1, p2, soma = 0, media = 0;
	
	for(int i = 1; i <= 2; i++)
	{
		do
		{
			printf("Informe o valor de P1 do aluno %d: (de 0 ate 10))\n", i);
			scanf(" %d", &p1);
		}while(p1<0 || p1 > 10);
		
		do
		{
			printf("Informe o valor de P2 do aluno %d:  (de 0 ate 10)\n", i);
			scanf(" %d", &p2);
		}while( p2 < 0 || p2 > 10);
		
		soma = p1 + p2;
		media = soma / 2;
		
		printf("Media do aluno %d eh %.2f \n", i, media);
	}
	
	return 333;
}
