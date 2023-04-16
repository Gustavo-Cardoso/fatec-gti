#include <stdio.h>
#include <locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float n1,n2,n3 = 0;
	 
	printf("Informe o primeiro número\n");
	scanf("%f", &n1);
	fflush(stdin);
	printf("Informe o segundo número\n");
	scanf("%f", &n2);
	fflush(stdin);
	printf("Informe o terceiro número\n");
	scanf("%f", &n3);	
	
	if (n1 > n2 && n1 > n3)
	{
		printf("O %.2f é maior que %.2f e %.2f",n1,n2,n3);
	} else if (n2 > n1 && n2 > n3){
		printf("O %.2f é maior que %.2f e %.2f",n2,n1,n3);
	} else {
		printf("O %.2f é maior que %.2f e %.2f",n3,n1,n2);
	}
	
	return 333;
}
