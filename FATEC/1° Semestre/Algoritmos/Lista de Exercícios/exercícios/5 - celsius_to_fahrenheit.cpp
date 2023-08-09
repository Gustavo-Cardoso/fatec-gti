//5) Criar programa que converta a temperatura de graus Celsius para Fahrenheit (F = (C x 1.8) + 32)
#include "stdio.h"

int main(){
	
	float cel = 0, conv = 0;
	
	printf("Informe a temperatura em graus Celsius: \n");
	scanf(" %f", &cel);
	
	conv = (cel * 1.8) + 32;
	
	printf("%.1f C equivale %.1f F\n", cel, conv);
	
	return 333;
}
