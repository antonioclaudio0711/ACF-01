#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, numero, contagem, contagem_primos;
	contagem = 0;
	contagem_primos = 0;
	
	for(i=1; i<=10; i++)
	{
		printf("Insira um número:");
		scanf("%i",&numero);
		
		for(j=1; j<=numero; j++)
		{
			if(numero%j == 0)
			{
				contagem = contagem + 1;
			}
		}
		
		if(contagem == 2)
		{
			contagem_primos = contagem_primos + 1;
		}
		
		contagem = 0;
	}
	
	printf("Dentre os números inseridos, %i são números primos.", contagem_primos);
}
