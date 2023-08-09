#include <stdio.h>

int main()
{
	char aluno[10][61];
	
	for(int i = 0; i <= 10; i++)
	{
		printf("Informe o nome do %d: \n", i);
		gets(aluno[i]);
	}
	
	for(int j = 0; j <= 10; j++)
	{
		printf("Aluno %d: %s \n", j, aluno[j]);
	}
}
