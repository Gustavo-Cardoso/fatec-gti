#include "stdio.h"

int main(){
	int qtdeJogadores;
	float altura = 0, soma = 0;
	
	printf("Informe a quantidade de jogadores:\n");
	scanf(" %d", &qtdeJogadores);
	
	for(int i = 1; i <= qtdeJogadores; i++)
	{
		printf("Informe a altura do jogador %d:\n", i);
		scanf(" %f", &altura);
		
		soma = soma + altura;
	}
	
	printf("Media altura do time: %.2f", soma/qtdeJogadores);
	
	return 333;
}
