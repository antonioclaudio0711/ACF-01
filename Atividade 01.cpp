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
		printf("Insira a matrícula do discente do curso de Lógica:");
		scanf("%i",&vetor_logica[i]);
	}
	
	for(j=0; j<10; j++)
	{
		printf("Insira a matrícula do discente do curso de Linguagem de programação:");
		scanf("%i",&vetor_linguagem_de_programacao[j]);
	}
	
	printf("\n****    LÓGICA    ****\n");
	for(i=0; i<15; i++)
	{
		printf("%i ", vetor_logica[i]);
	}
	
	printf("\n****    LINGUAGEM DE PROGRAMAÇÃO    ****\n");
	for(j=0; j<10; j++)
	{
		printf("%i ", vetor_linguagem_de_programacao[j]);
	}
}
