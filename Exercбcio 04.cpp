#include<locale.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[5], i, j, contagem_primos, soma_primos, contagem;
	soma_primos = 0;
	contagem_primos = 0;
	contagem = 0;
	
	for(i=0; i<5; i++)
	{
		vetor[i] = rand();
	}
	
	printf("Vetor preenchido\n");
	for(i=0; i<5; i++)
	{
		printf("[%i] ", vetor[i]);
	}
	
	for(i=0; i<5; i++)
	{
		for(j=1; j<=vetor[i]; j++)
		{
			if(vetor[i]%j == 0)
			{
				contagem_primos = contagem_primos + 1;
			}
		}
		
		if(contagem_primos == 2)
		{
			soma_primos = soma_primos + vetor[i];
			printf("\nValor = %i; Índice = %i", vetor[i], i);
		}
		
		contagem_primos = 0;
	}
	
	for(i=0; i<5; i++)
	{
		if(vetor[i] < soma_primos)
		{
			contagem = contagem + 1;
		}
	}
	
	printf("\n%i números são menores que a soma dos números primos, que é: %i", contagem, soma_primos);
}
