// 7) Criar programa que receba um n�mero inteiro qualquer, calcule e exiba o antecessor e o sucessor do mesmo
#include "stdio.h"
#include "locale.h"

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int num = 0;
	
	printf("Informe um n�mero inteiro: \n");
	scanf(" %d", &num);
	
	printf("O antecessor de %d �: %d e o sucessor �: %d", num, num-1, num+1);
}
