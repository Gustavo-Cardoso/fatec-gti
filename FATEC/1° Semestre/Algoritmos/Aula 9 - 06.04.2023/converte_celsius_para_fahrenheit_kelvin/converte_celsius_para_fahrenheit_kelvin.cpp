#include "stdio.h"

int main() {
	float cel = 0, conv = 0;
	int opcao=  0;
	char resp;
	
	do{
		printf("Informe para qual temperatura deseja converter: \n 1 - Kelvin \n 2 - Fahrenheit\n");
		scanf(" %d", &opcao);
		printf("Informe a temperatura em graus celsius:\n");
		scanf(" %f", &cel);
		
		if (opcao == 1){
			conv = cel + 273.15;
		} else if (opcao == 2) {
			conv = (cel * 1.8) + 32;
		} else {
			printf("Opcao selecionada invalida");
		}
		
		printf("O valor da conversao eh: %.2f\n", conv);
		
		printf("Deseja converter outro valor?\n");
		scanf(" %c", &resp);
	} while (resp == 'S' || resp == 's');
	
	
	
}
