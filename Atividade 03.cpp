#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i, numero, maior_numero, menor_numero;
	
	printf("\nInsira um n�mero:");
	scanf("%i",&numero);
	maior_numero = numero;
	menor_numero = numero;
	
	for(i=1; i<=4; i++)
	{
		printf("\nInsira um n�mero:");
		scanf("%i",&numero);
		
		if(numero > maior_numero)
		{
			maior_numero = numero;
		}
		
		if(numero < menor_numero)
		{
			menor_numero = numero;
		}
	}
	
	printf("\nDentre os n�meros inseridos, o maior n�mero �: %i.", maior_numero);
	printf("\nDentre os n�meros inseridos, o menor n�mero �: %i.", menor_numero);
}
