#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i, transacao;
	float valor, valor_total_vista, valor_total_prazo, valor_total, prestacao;
	valor_total_vista = 0;
	valor_total_prazo = 0;
	
	for(i=1; i<=15; i++)
	{
		printf("\nInsira 1 para transa��es � vista e 2 para transa��es � prazo:");
		scanf("%i",&transacao);
		
		if(transacao == 1)
		{
			printf("\nInsira o valor da transa��o � vista:");
			scanf("%f",&valor);
			valor_total_vista = valor_total_vista + valor;
		}
			else if(transacao == 2)
			{
				printf("\nInsira o valor da transa��o � prazo:");
				scanf("%f",&valor);
				valor_total_prazo = valor_total_prazo + valor;
			}
	}
	
	printf("\nO valor total das compras � vista � de R$ %.2f.", valor_total_vista);
	printf("\nO valor total das compras � prazo � de R$ %.2f.", valor_total_prazo);
	
	valor_total = valor_total_vista + valor_total_prazo;
	
	printf("\nO valor total das compras realizadas � de R$ %.2f.", valor_total);
	
	prestacao = valor_total_prazo / 3;
	
	printf("\nO valor da primeira presta��o das compras � prazo � de R$ %.2f.", prestacao);
}
