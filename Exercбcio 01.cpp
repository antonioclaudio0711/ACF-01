#include<locale.h>
#include<math.h>
#include<stdio.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[6], i, contagem_par;
	contagem_par = 0;
	
	for(i=0; i<6; i++)
	{
		printf("Insira um valor para o �ndice %i:", i);
		scanf("%i", &vetor[i]);
		
		if(vetor[i]%2 == 0)
		{
			contagem_par = contagem_par + 1;
		}
	}
	
	printf("N�meros pares inseridos no vetor: ");
	for(i=0; i<6; i++)
	{
		if(vetor[i]%2 == 0)
		{
			printf("[%i] ", vetor[i]);
		}
	}
	printf("\n***********************************");
	
	printf("\nN�meros �mpares inseridos no vetor: ");
	for(i=0; i<6; i++)
	{
		if(vetor[i]%2 != 0)
		{
			printf("[%i] ", vetor[i]);
		}
	}
	printf("\n***********************************");
	
	printf("\nForam inseridos %i n�meros pares.", contagem_par);
	printf("\n***********************************");
	
	printf("\nForam inseridos %i n�meros �mpares.", 6 - contagem_par);
}
