#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int idade, idade_faltante;
	
	// Entrada de dados
	printf("Insira a sua idade:");
	scanf("%i",&idade);
	
	// Processamento de dados
	idade_faltante = 18 - idade;
	
	// Sa�da de dados
	if (idade >= 18)
	{
		printf("O usu�rio est� apto a tirar a CNH!");
	}
	else
	{
		printf("Faltam %i anos para que o usu�rio esteja apto a tirar a CNH!", idade_faltante);
	}
}
