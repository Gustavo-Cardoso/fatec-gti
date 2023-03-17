#include <stdio.h>
#include <locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float peso, altura, imc = 0;
	
	printf("Informe sua peso em kg:\n");
	scanf("%f2", &peso);
	fflush(stdin);
	printf("Informe sua altura:\n");
	scanf("%f2", &altura);
	
	imc = peso / (altura * altura);
	
	if (imc < 18.5)
	{
		printf("Abaixo do peso");
	} else if (imc >= 18.5 && imc <= 24.9)
	{
		printf("Peso  normal");
	} else if (imc >= 25 && imc <= 29.9)
	{
		printf("Excesso de peso");
	} else if (imc >= 30 && imc <= 34.9)
	{
		printf("obesidade classe I");
	} else {
		printf("obesidade classe II");
	}
	
	return 333;
}
