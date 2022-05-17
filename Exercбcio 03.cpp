#include<stdio.h>
#include<math.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int vetor [15], i;
	
	for(i=0; i<15; i++)
	{
		printf("Insira um valor para o índice %i:", i);
		scanf("%i",&vetor[i]);
	}
	
	for(i=0; i<15; i++)
	{
		if(vetor[i] == 30)
		{
			printf("\nvalor = 30; posição = %i", i);
		}
	}
}
