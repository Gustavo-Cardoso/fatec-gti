/*15) Receber uma letra do usu�rio, detecte se � mai�scula ou min�scula, altere seu caso e exiba. N�o permita
inser��o de especiais ou n�meros. Crie o fluxograma tamb�m*/

#include "stdio.h"

int main(){
	
	char resp, conv;
	
	do{
		printf("Informe uma letra:");
		scanf(" %c", &resp);
		
		if (resp >= 65 && resp <= 90)
		{
			conv = resp + 32;
			printf("Letra informa: %c\nLetra convertida: %c\n", resp, conv);
		} else if (resp >= 97 && resp <= 122) {
			conv = resp - 32;
			printf("Letra informa: %c\nLetra convertida: %c\n", resp, conv);
		} else {
			printf("Informe somente letra!!!");
		}	
		
	} while ((resp >= 65 && resp <= 90) || (resp >= 97 && resp <= 122));
	
	return 333;
}
