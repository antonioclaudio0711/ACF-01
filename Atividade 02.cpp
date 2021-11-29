#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i, limite_superior, limite_inferior, soma;
	soma = 0;
	
	printf("Insira o primeiro número a ser considerado na soma:");
	scanf("%i",&limite_inferior);
	printf("Insira o último número a ser considerado na soma:");
	scanf("%i",&limite_superior);
	
	for(i=limite_inferior; i<=limite_superior; i++)
	{
		soma = soma + i;
	}
	
	printf("A soma dos valores considerados entre %i e %i é: %i.", limite_inferior, limite_superior, soma);
}
