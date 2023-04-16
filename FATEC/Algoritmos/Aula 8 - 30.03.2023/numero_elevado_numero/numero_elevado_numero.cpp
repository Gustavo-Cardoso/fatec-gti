/* 8) Crie uma calculadora de potências onde os 2 valores positivos serão inseridos pelo usuário. Faça um fluxograma no Visio representando. 
Não permita inserção de não-positivos.
(Testem com esses: 31=3 || 42=16 || 210=1024).
*/

#include "stdio.h"

int main(){
	int num1 = 0, num2 = 0, calc = 1;
	
	printf("Inseri o primeiro numero positivo: \n");
	scanf("%d", &num1);
	printf("Inseri o segundo numero positivo: \n");
	scanf("%d", &num2);
	
	if(num1 < 0 || num2 < 0){
		printf("Não pode numero negativo");
	} else {
		for (int i = 1; i <= num2; i++)
		{
			calc = calc * num1;
		}
	
		printf("Reusltado de %d elevado a %d eh: %d", num1, num2, calc);
		
	}
	
	return 333;
}
