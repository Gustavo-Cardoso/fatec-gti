#include "stdio.h" // Entra e saída padrão
#include "locale.h"

int main(){
	// sem usar locale
	printf("Sem usar locale");
	printf("pão e café \n");
	printf("%.2f \n", 3.14);
	
	setlocale(LC_ALL, "portuguese");
	
	// com o locale declarado
	printf("Com o locale");
	printf("pão e café \n");
	printf("%.2f \n", 3.14);
	
	float num = 0;
	printf("Digite um decimal:");
	scanf(" %f", &num);
	printf("%f", num);
	
	return 333;
}
