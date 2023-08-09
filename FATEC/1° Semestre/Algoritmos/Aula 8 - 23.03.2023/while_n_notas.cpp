#include <stdio.h>

int main()
{
	float nota, soma, media, percAprovados = 0;
	int aprovados = 0, reprovados = 0, qtde = 0;
	char resp = 's';
	
	while (resp == 's' || resp =='S')
	{
		printf("Informe a nota: ");
		scanf("%f", &nota);
		
		if (nota >= 6.0){
			aprovados++;
		} 
		
			qtde++;
			soma = soma + nota;
			
		printf("Outra nota?\n");
		scanf(" %c", &resp)	;	
	}
	
	media = soma / qtde;
	printf("A media foi: %.2f\n", media);
	
	percAprovados = ((float)aprovados / qtde) * 100;
	printf("O percentual de aprovados foi: %.2f%%", percAprovados);
	
	return 333;
}
