#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>

void vetor_novo (float x[]);

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float vetor[15], maior_valor;
	int i;
	
	printf("Insira um valor para o �ndice 0 do vetor:");
	scanf("%f",&vetor[0]);
	maior_valor = vetor[0]; 
	
	for(i=1; i<15; i++)
	{
		printf("Insira um valor para o �ndice %i do vetor:", i);
		scanf("%f",&vetor[i]);
		if(vetor[i] > maior_valor)
		{
			maior_valor = vetor[i];	
		} 	
	}
	
	for(i=0; i<15; i++)
	{
		vetor[i] = vetor[i] / maior_valor;
	}
	
	vetor_novo(vetor);
}

void vetor_novo(float x[])
{
	int i;
	
	for(i=0; i<15; i++)
	{
		printf("[%.2f] ", x[i]);
	}
}

