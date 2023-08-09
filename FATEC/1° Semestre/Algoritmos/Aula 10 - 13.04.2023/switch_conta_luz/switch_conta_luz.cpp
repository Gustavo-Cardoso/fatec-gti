#include "stdio.h"

int main(){
	float consumo = 0, fixo = 0.26, verde = 0, ama = 0.015, verm1 = 0.040, verm2 = 0.060;
	int opcao;
	
	printf("Informe o consumo em Kwh:\n");
	scanf (" %f", &consumo);
	
	printf("******** MENU BANDEIRAS ********\n");
	printf("*** 1 - Verde                ***\n");
	printf("*** 2 - Amarelo              ***\n");
	printf("*** 3 - Vermelho I           ***\n");
	printf("*** 4 - Vermelho II          ***\n");
	printf("**Selecione uma opacao:         \n");
	scanf (" %d", &opcao);
	
	switch (opcao)
	{
		case 1:
			printf("Valor da conta:%.2f", ((fixo+verde)*consumo));
			break;
		case 2:
			printf("Valor da conta:%.2f", ((fixo+ama)*consumo));
			break;
		case 3:
			printf("Valor da conta:%.2f", ((fixo+verm1)*consumo));
			break;
		case 4:
			printf("Valor da conta:%.2f", ((fixo+verm2)*consumo));
			break;
		default:
			printf("Opcao selecionada invalida");
			break;
	}
}
