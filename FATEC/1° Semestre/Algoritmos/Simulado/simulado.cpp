/* 
 int main() {return 0}; � o m�todo principal que por obriga��o � necess�rio ter o return
 defini a fun��o principal e retorna um inteiro
 sintax e sem�ntica: sintax � que faz parte da linguaguem (regras da linguagem), como palavras reservadas (if, else, for, switch, and...).
 Sem�ntica � erro na escrita da l�gica, como por exemplo atribuir um valor float para uma vari�vel do tipo inteira
*/

#include "stdio.h"

int main(){
	
	int qtde = 0, nota = 0, soma = 0;
	float media = 0;
	
	printf("Informe a quantidade de notas: ");
	scanf("%d", &qtde);
	
	for (int i = 1; i <= qtde; i++)
	{
		printf("Informe a nota %d: \n", i);
		scanf(" %d", &nota);
		
		if(nota%2 == 0 && nota >= 0)
		{
			soma = soma + nota;
			media = soma / qtde;
		}
	}
	
	printf("Total de notas informadas:%d.\nM�dia final: %.2f", qtde, media);
	
	return 333;
}
