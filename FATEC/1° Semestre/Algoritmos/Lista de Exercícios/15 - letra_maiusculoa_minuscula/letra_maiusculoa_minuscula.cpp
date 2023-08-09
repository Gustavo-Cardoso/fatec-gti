/*15) Receber uma letra do usuário, detecte se é maiúscula ou minúscula, altere seu caso e exiba. Não permita
inserção de especiais ou números. Crie o fluxograma também*/

#include "stdio.h"

int main(){
	
	char resp, conv;
	
	do{
		printf("Informe uma letra:");
		scanf(" %c", &resp);
		
		if(!((resp >= 65 && resp <= 90) || (resp >= 97 && resp <= 122)))
		{
			printf("Somente letra eh valida!!!\n");
		}
		
	} while (!((resp >= 65 && resp <= 90) || (resp >= 97 && resp <= 122)));
	
	if (resp >= 65 && resp <= 90)
	{
		conv = resp + 32;
		printf("Letra informa: %c\nLetra convertida: %c\n", resp, conv);
	} else if (resp >= 97 && resp <= 122) {
		conv = resp - 32;
		printf("Letra informa: %c\nLetra convertida: %c\n", resp, conv);
	}
	return 333;
}
