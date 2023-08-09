#include <stdio.h>

typedef struct
{
	char nome[40];
} fichaDeAluno;

int main()
{
	fichaDeAluno aluno[3];
	
	for(int i=1; i<=10; i++)
	{
		printf("Informe o nome do aluno %d: \n", i);
		fgets(aluno[i].nome, 40, stdin);
	}
	
	printf("Lista de alunos: \n");
	
	for(int j=1; j<=10; j++)
	{
		printf("Informe o nome do aluno %s: \n", aluno[j].nome);
	}
	
	return 333;
}


