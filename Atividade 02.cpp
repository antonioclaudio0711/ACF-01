#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int vetor[10];
	int i;
	
	for(i=0; i<10; i++)
	{
		vetor[i] = rand()%10;
	}
	
	for(i=0; i<10; i++)
	{
		printf("%i  ", vetor[i]);
	}
}
