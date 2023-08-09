/*13) Receba o salário bruto, calcule o desconto e exiba o valor do salário líquido: (Bruto menor que R$1200 =
desconto 0%; Bruto entre R$1200 e R$3500 = desconto 9,4%; Bruto maior que R$3500 = desconto 21,1%).
Não permita inserção de salário negativo*/

#include "stdio.h"

int main(){
	float bruto = 0, liquido = 0, desconto = 0;
	
	do {
		printf("Informe o salario:\n");
		scanf(" %f", &bruto);
	} while (bruto < 0);
		
	if(bruto < 1200){
		desconto = bruto * 0;
		liquido = bruto - desconto;
		printf("Salario Liquido: %.2f", liquido);
	} else if (bruto >= 1200 && bruto <= 3500){
		desconto = bruto * 0.094;
		liquido = bruto - desconto;
		printf("Salario Liquido: %.2f", liquido);
	} else {
		desconto = bruto * 0.211;
		liquido = bruto - desconto;
		printf("Salario Liquido: %.2f", liquido);
	}
	
	return 333;
}
