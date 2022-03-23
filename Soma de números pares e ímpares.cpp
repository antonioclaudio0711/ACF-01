#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, numero, soma_pares, contagem, soma_primos;
	soma_pares = 0;
	contagem = 0;
	soma_primos = 0;
	
	for(i=1; i<=10; i++)
	{
		printf("Insira um número:");
		scanf("%i",&numero);
		
		if(numero%2 == 0)
		{
			soma_pares = soma_pares + numero;
		}
		
		for(j=1; j<=numero; j++)
		{
			if(numero%j == 0)
			{
				contagem = contagem + 1;
			}
		}
		if(contagem == 2)
		{
			soma_primos = soma_primos + numero;
		}
		
		contagem = 0;
	}
	
	printf("A soma dos números pares inseridos é de: %i.", soma_pares);
	printf("\nA soma dos números primos inderidos é de: %i.", soma_primos);
}

