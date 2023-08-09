// 19) Calcule a soma dos n números pares inseridos pelo usuário

#include "stdio.h"

int main(){
	
	char resp;
	int cont = 0;
	float nota = 0, soma = 0;
	
	do{
		printf("Deseja informar uma nota?");
		scanf(" %c", &resp);
		
		if (resp == 's' || resp == 'S')
		{
			printf("Informe uma nota: ");
			scanf(" %f", &nota);
			
			cont++;
			soma = soma + nota;
		}
		
	} while (resp == 's' || resp == 'S');
	
	printf("Total de notas informadas: %d.\nSoma total: %.2f.", cont, soma);
	
	return 333;
}
