#include <stdio.h>
#include <locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float salario, novoSalario = 0;
	
	printf("Informe seu sal�rio bruto:\n");
	scanf("%f", &salario);
	
	if (salario <= 1903.98)
	{
		printf("Isento de IRPF");
	} else if (salario >= 1903.99 && salario <= 2826.65)
	{
		novoSalario = salario - (salario * 0.075);
		printf("Seu sal�rio com desconto � %.2f e a al�quota cobrada: 7,5%%",novoSalario);
	} else if (salario >= 2826.65 && salario <= 3751.05)
	{
		novoSalario = salario - (salario * 0.15);
		printf("Seu sal�rio com desconto � %.2f e a al�quota cobrada: 15%%",novoSalario);
	} else if (salario >= 3751.06 && salario <= 4664.68)
	{
		novoSalario = salario - (salario * 0.22);
		printf("Seu sal�rio com desconto � %.2f e a al�quota cobrada: 22%%",novoSalario);
	} else {
		novoSalario = salario - (salario * 0.275);
		printf("Seu sal�rio com desconto � %.2f e a al�quota cobrada: 27,5%%",novoSalario);
	}
	
	return 333;
}
