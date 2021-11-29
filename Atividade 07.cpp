#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int numero, maior_numero, menor_numero;
	
	printf("Insira um número inteiro e positivo:");
	scanf("%i",&numero);
	maior_numero = numero;
	menor_numero = numero; 
	
	while(numero != 0 && numero > 0)
	{
		if(numero > maior_numero)
		{
			maior_numero = numero;
		}
		
		if(numero < menor_numero)
		{
			menor_numero = numero;
		}
		
		printf("Insira um número inteiro e positivo:");
		scanf("%i",&numero);
	}
	
	printf("\nO maior valor inserido é %i.", maior_numero);
	printf("\nO menor valor inserido é %i.", menor_numero);
}
