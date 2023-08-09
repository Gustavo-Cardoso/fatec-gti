// 20) Receba a média final (MF) de n alunos da sala e exiba a quantidade de reprovados com nota 6,0 ou superior

#include "stdio.h"

int main(){
	
	char resp;
	float nota = 0;
	int aprovado = 0, reprovado = 0;
	
	do{
		printf("Deseja informar uma nota?");
		scanf(" %c", &resp);
		
		if (resp == 's' || resp == 'S')
		{
			printf("Informe uma nota: ");
			scanf(" %f", &nota);
			
			if (nota >= 6)
			{
				aprovado++;
			} else if (nota >= 0 && nota < 6) {
				reprovado++;
			} else {
				printf("Não pode nota negativa!");
			}
		}
	} while (resp == 's' || resp == 'S');
	
	printf("Total de alunos aprovados: %d.\nTotal de alunos reprovados: %d.", aprovado, reprovado);
}
