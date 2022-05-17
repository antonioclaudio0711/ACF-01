#include <iostream>
#include <stdlib.h>
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <locale.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

#define tam 2

main ()
{
setlocale(LC_ALL, "Portuguese");

	int vet[tam], vnum[tam], vres[20];
	int contp, conti;
	int i;	
	
	printf("VETOR 1");
	for (i=0; i<tam; i++)
	{
		printf("Insira um valor no índice %i: ", i+1);
		scanf("%i", &vet[i]);
	}
	printf("\n");
	
	printf("VETOR 2");
	for (i=0; i<tam; i++)
	{
		printf("Insira um valor no índice %i: ", i+1);
		scanf("%i", &vnum[i]);
	}
	printf("\n");
	
	printf("VETOR 1:\n");
		for (i=0; i<tam; i++)
	{
		printf(" %d ", vet[i]);
	}
	
	printf("\n");
	printf("VETOR 2: \n");
		for (i=0; i<tam; i++)
	{
		printf(" %d ", vnum[i]);
	}
	
	printf("\n");		
	printf("VETOR RESULTANTE: \n");
		for (i=0; i<tam; i++)
	{
		vres[i*2] =  vet[i];
	}
		for (i=0; i<tam; i++)
	{
		vres[i*2+1] =  vnum[i];
	}
		for (i=0; i<2*tam; i++)
	{
		printf(" %d ", vres[i]);
	}
	
	
}

