#include <stdio.h>
#include <locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float salario, novoSalario = 0;
	
	printf("informe o sal�rio:\n");
	scanf("%f", &salario);
	
	if (salario < 1000)
	{
		printf("Seu sal�rio l�quido � %.2f, com desconto de 0%%", salario);		
	} else if ( salario >= 1000 && salario <= 3000){
		novoSalario = salario - (salario * 0.1);
		printf("Seu sal�rio l�quido � %.2f, com desconto de 10%%", novoSalario);	
	} else if ( salario > 3000){
		novoSalario = salario - (salario * 0.2);
		printf("Seu sal�rio l�quido � %.2f, com desconto de 20%%", novoSalario);	
	}
	
	return 333;
}
