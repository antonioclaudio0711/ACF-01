#include<stdio.h>
#include<locale.h>
#include<math.h>

void primo(int x);

main()
{
	setlocale(LC_ALL,"Portuguese");

	int valor;
	float resposta;
	
	printf("Insira um número:");
	scanf("%i",&valor);
	
	primo(valor);
}

void primo(int x)
{
	int i, cont;
	cont = 0;
	
	for(i=1; i<=x; i++)
	{
		if(x%i == 0)
		{
			cont = cont + 1;
		}
	}
	if(cont == 2)
	{
		printf("O número %i é primo!", x);
	}
	else
	{
		printf("O número %i não é primo!", x);
	}
}
