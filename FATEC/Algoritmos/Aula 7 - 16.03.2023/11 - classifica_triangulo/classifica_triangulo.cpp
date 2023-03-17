#include <stdio.h>
#include <locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a,b,c = 0;
	
	printf("Informe o valor do lado A:\n");
	scanf("%d", &a);
	fflush(stdin);
	printf("Informe o valor do lado B:\n");
	scanf("%d", &b);
	fflush(stdin);
	printf("Informe o valor do lado C:\n");
	scanf("%d", &c);
	fflush(stdin);
	
	if ((a+b) > c && (a+c) > b && (b+c) > a) 
	{
		if (a==b && a==c && b==c){
			printf("Triângulo equilátero, pois todos os lados são iguais. Lado A:%d. Lado B: %d. Lado C: %d", a,b,c);
		} else if (a==b && a==c || a==b && b==c || b==c && b==a) {
			printf("Triângulo isósceles, pois todos dois dos seus lados são iguais. Lado A:%d. Lado B: %d. Lado C: %d", a,b,c);
		} else {
			printf("Triângulo escaleno, pois todos os seus lados são diferentes. Lado A:%d. Lado B: %d. Lado C: %d", a,b,c);
		} 
		 
		 
	}
	else 
	{
		printf("não é possível formar um triângulo com os valores infomrados: %d,%d,%d",a,b,c);
	}
}
