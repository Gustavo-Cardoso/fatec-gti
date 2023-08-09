// 18) Calcule a média de n números inseridos pelo usuário.

#include "stdio.h"

int main(){
	
	char resp;
	int cont = 0;
	float p1 = 0, p2 = 0, mediaP1 = 0, mediaP2 = 0, somaP1 = 0, somaP2 = 0;
	
	do{
		printf("Deseja informar uma nota?");
		scanf(" %c", &resp);
		
		if (resp == 's' || resp == 'S')
		{
			printf("Informe a nota P1: ");
			scanf(" %f", &p1);
			printf("Informe a nota P2: ");
			scanf(" %f", &p2);
			
			cont++;
			somaP1 = somaP1 + p1;
			somaP2 = somaP2 + p2;
			mediaP1 = somaP1 / cont;
			mediaP2 = somaP2 / cont;
		}
		
	} while (resp == 's' || resp == 'S');
	
	printf("Total de notas informadas: %d.\nSoma total P1: %.2f\nSoma total P2: %.2f\nMedia P1: %.2f.\nMedia P2: %.2f", cont, somaP1, somaP2, mediaP1, mediaP2);
	
	return 333;
}
