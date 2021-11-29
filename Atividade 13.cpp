#include<stdio.h>
#include<locale.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i, idade, contagem01, soma_idades;
	float peso, media;
	contagem01 = 0;
	
	for(i=1; i<=7; i++)
	{
		printf("\nInsira sua idade:");
		scanf("%i",&idade);
		printf("\nInsira seu peso:");
		scanf("%f",&peso);
		printf("\n*****************");
		
		soma_idades = soma_idades + idade;
		
		if(peso > 90)
		{
			contagem01 = contagem01 + 1;
		}
	}
	
	printf("\nDentre as pessoas analisadas, %i possuem mais de 90 quilos.", contagem01);
	media = soma_idades / 7;
	printf("\nA média das idades das pessoas analisadas é de %.2f.", media);
}
