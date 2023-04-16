#include "stdio.h"

int main(){
	int opcao;
	
	printf("Selecione uma opcao: \n");
	scanf("%d", &opcao);
	
	switch(opcao)
	{
		case 1:
			printf("Opcao 1 selecionada");
			break;
		case 2:
			printf("Opcao 2 selecionada");
			break;
		case 3:
			printf("Opcao 3 selecionada");
			break;
		case 4:
			printf("Opcao 4 selecionada");
			break;
		case 5:
			printf("Opcao 5 selecionada");
			break;
		default:
			printf("Opcao invalida!");
			break;
	}
	
	return 333;
}
