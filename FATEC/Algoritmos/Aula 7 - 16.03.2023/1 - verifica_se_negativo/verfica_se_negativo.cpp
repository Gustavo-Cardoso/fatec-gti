#include <stdio.h>
#include <locale>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num = 0;
	
	printf("Informe um n�mero:\n");
	scanf("%f", &num);
	
	if (num > 0)
	{
		printf("O n�mero %.2f � positivo: ", num);	
	} else if (num < 0) 
	{
		printf("O n�mero %.2f � negativo: ", num);	
	} else
	{
		printf("O n�mero %.2f � zero: ", num);	
	}
	
	return 333;
}



