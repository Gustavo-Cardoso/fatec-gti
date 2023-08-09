#include "stdio.h"

int main(){
	
	// VARIÁVEIS DE QUANTIDADE EM QUILOS
	float qtdeMussa = 0, qtdePresu = 0, qtdePeru = 0, qtdeMorta = 0;
	// VARIÁVEIS PARA CALCULAR VALORES DE VENDA
	float vendaMussa = 0, vendaPresu = 0, vendaPeru = 0, vendaMorta = 0;
	// VARIÁVEIS PARA CALCULAR COMISSÃO SOBRE AS VENDAS
	float comissaoMussa = 0, comissaoPresu = 0, comissaoPeru = 0, comissaoMorta = 0;
	
	printf("Informe a quantidade vendida em quilos de MUSSARELA:\n");
	scanf(" %f", &qtdeMussa);
	printf("Informe a quantidade vendida em quilos de PRESUNTO:\n");
	scanf(" %f", &qtdePresu);
	printf("Informe a quantidade vendida em quilos de PERU:\n");
	scanf(" %f", &qtdePeru);
	printf("Informe a quantidade vendida em quilos de MORTADELA:\n");
	scanf(" %f", &qtdeMorta);
	
	// CÁLCULOS DOS VALORES DE VENDAS
	vendaMussa = 56.20 * qtdeMussa;
	vendaPresu = 78.20 * qtdePresu;
	vendaPeru = 89.60 * qtdePeru;
	vendaMorta = 25.90 * qtdeMorta;
	
	// CÁLCULOS DOS VALORES DAS COMISSÕES
	comissaoMussa = vendaMussa * 0.03;
	comissaoPresu = vendaPresu * 0.05;
	comissaoPeru = vendaPeru * 0.1;
	comissaoMorta = vendaMorta * 0.08;
	
	// IMPRIMINDO VALORES TOTAL DE CADA PRODUTO
	printf("Valor total MUSSARELA: R$ %.2f \n", vendaMussa);
	printf("Valor total PRESUNTO: R$ %.2f \n", vendaPresu);
	printf("Valor total PERU: R$ %.2f \n", vendaPeru);
	printf("Valor total MORTADELA: R$ %.2f \n", vendaMorta);
	
	// IMPRIMINDO VALORES DA MISSÃO DE CADA PRODUTO
	printf("Valor comissao MUSSARELA: %.2f \n", comissaoMussa);
	printf("Valor comissao PRESUNTO: %.2f \n", comissaoPresu);
	printf("Valor comissao PERU: %.2f \n", comissaoPeru);
	printf("Valor comissao MORTADELA: %.2f \n", comissaoMorta);
	
	// IMPRIMINDO VALOR TOTAL DAS VENDAS
	printf("Valor total das vendas: R$ %.2f \n", vendaMussa+vendaPresu+vendaPeru+vendaMorta);
	
	//IMPRIMINDO VALOR TOTAL DA COMIISÃO FINAL
	printf("Valor total da comissao: R$ %.2f \n", comissaoMussa+comissaoPresu+comissaoPeru+comissaoMorta);
	
	return 333;
}
