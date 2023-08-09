// 17) Calcule a média de n números inseridos pelo usuário.

#include "stdio.h"

int main(){
	
	char resp;
	int cont = 0;
	float media = 0, soma = 0, nota = 0;
	
	do{
		printf("Deseja informar uma nota?\n");
		scanf(" %c", &resp);
		
		if (resp == 's' || resp == 'S')
		{
			printf("Informe uma nota: ");
			scanf(" %f", &nota);
			
			cont++;
			soma = soma + nota;
			media = soma / cont;
		}
		
	} while(resp == 's' || resp == 'S');
	
	printf("Total de notas inseridas: %d.\nA soma total foi: %.2f.\nA media eh: %.2f.\n", cont, soma, media);
	
	return 333;
}

