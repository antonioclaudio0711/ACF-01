#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int vetor_logica[15], vetor_linguagem_de_programacao[10];
	int i, j;
	
	for(i=0; i<15; i++)
	{
		printf("Insira a matr�cula do discente do curso de L�gica:");
		scanf("%i",&vetor_logica[i]);
	}
	
	for(j=0; j<10; j++)
	{
		printf("Insira a matr�cula do discente do curso de Linguagem de programa��o:");
		scanf("%i",&vetor_linguagem_de_programacao[j]);
	}
	
	printf("\n****    L�GICA    ****\n");
	for(i=0; i<15; i++)
	{
		printf("%i ", vetor_logica[i]);
	}
	
	printf("\n****    LINGUAGEM DE PROGRAMA��O    ****\n");
	for(j=0; j<10; j++)
	{
		printf("%i ", vetor_linguagem_de_programacao[j]);
	}
}
