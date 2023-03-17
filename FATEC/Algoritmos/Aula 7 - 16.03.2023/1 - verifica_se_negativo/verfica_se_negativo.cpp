#include <stdio.h>
#include <locale>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num = 0;
	
	printf("Informe um número:\n");
	scanf("%f", &num);
	
	if (num > 0)
	{
		printf("O número %.2f é positivo: ", num);	
	} else if (num < 0) 
	{
		printf("O número %.2f é negativo: ", num);	
	} else
	{
		printf("O número %.2f é zero: ", num);	
	}
	
	return 333;
}



