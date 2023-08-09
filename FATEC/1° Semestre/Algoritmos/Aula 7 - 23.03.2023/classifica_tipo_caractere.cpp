#include "stdio.h"

int main() 
{
	int caracter = 0;
	
	printf("Informe um caractere:\n");
	scanf(" %c", &caracter);
	
	while (caracter == 64)
	{
		printf("O caractere informado (@) eh invalido!\n Informe um caractere:\n");
		scanf(" %c", &caracter);
	}
	
	if (caracter >= 65 && caracter <= 90){
		printf("Letra maiuscula");
	} else if (caracter >= 97 && caracter <= 122){
		printf("Letra minuscula");
	} else if (caracter >= 33 && caracter <= 47) || (caracter >= 58 && caracter <= 63) || (caracter >= 94 && caracter <= 96) || (caracter >= 123)) {
		printf("Caractere especial");
	else {
		printf("Numero");
	}		
	
//	if ((caracter >= 33 && caracter <= 47) || (caracter >= 58 && caracter <= 63) || (caracter >= 94 && caracter <= 96) || (caracter >= 123)) {
//		printf("Caractere especial");	
//	} else if (caracter >= 48 && caracter <= 57){
//		printf("Numero");
//	} else if (caracter >= 65 && caracter <= 90){
//		printf("Letra maiuscula");	
//	} else if (caracter >= 97 && caracter <= 122){
//		printf("Letra minuscula");	
//	} else {
//		printf("Caractere fora do range!");
//	}
	
	return 333;	
}
