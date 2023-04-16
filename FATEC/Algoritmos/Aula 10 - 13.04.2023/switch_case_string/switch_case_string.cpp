#include "stdio.h"

int main(){
	char opcao;
	
	printf("Selecione uma opcao: \n");
	scanf(" %c", &opcao);
	
	switch(opcao)
	{
		case 'a':
			printf("Opcao amarelada selecionada");
			break;
		case 'b':
			printf("Opcao branco selecionada");
			break;
		case 'c':
			printf("Opcao caramelo selecionada");
			break;
		case 'd':
			printf("Opcao dourado selecionada");
			break;
		default:
			printf("Opcao invalida!");
			break;
	}
	
	return 333;
}
