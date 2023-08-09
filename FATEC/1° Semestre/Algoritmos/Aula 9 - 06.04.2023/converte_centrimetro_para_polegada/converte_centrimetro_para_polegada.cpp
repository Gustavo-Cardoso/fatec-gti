#include "stdio.h"

int main() {
	
	float cen = 0, pole = 0;
	char resp;
	
	do {
		
		printf("Informe o valor em centimetros: \n");
		scanf(" %f", &cen);
		
		if (cen > 0){
			pole = cen * 0.3937;
			printf("%.2f centimetros equivale %.2f polegadas \n", cen, pole);			
		}

		printf("Deseja converter outros? \n");
		scanf(" %c", &resp);
		
	} while (resp == 's' || resp == 'S');
}
