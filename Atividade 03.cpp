#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i, numero, maior_numero, menor_numero;
	
	printf("\nInsira um número:");
	scanf("%i",&numero);
	maior_numero = numero;
	menor_numero = numero;
	
	for(i=1; i<=4; i++)
	{
		printf("\nInsira um número:");
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
	
	printf("\nDentre os números inseridos, o maior número é: %i.", maior_numero);
	printf("\nDentre os números inseridos, o menor número é: %i.", menor_numero);
}
