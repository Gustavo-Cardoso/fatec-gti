/* 
 int main() {return 0}; É o método principal que por obrigação é necessário ter o return
 defini a função principal e retorna um inteiro
 sintax e semântica: sintax é que faz parte da linguaguem (regras da linguagem), como palavras reservadas (if, else, for, switch, and...).
 Semântica é erro na escrita da lógica, como por exemplo atribuir um valor float para uma variável do tipo inteira
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
	
	printf("Total de notas informadas:%d.\nMédia final: %.2f", qtde, media);
	
	return 333;
}
