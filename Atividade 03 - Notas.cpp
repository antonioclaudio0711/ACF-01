#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float nota01, nota02, nota03, media;
	
	// Entrada de dados
	printf("Insira a primeira nota:");
	scanf("%f",&nota01);
	printf("Insira a segunda nota:");
	scanf("%f",&nota02);
	printf("Insira a terceira nota:");
	scanf("%f",&nota03);
	
	// Processamento de dados
	media = (nota01 + nota02 + nota03) / 3;
	
	// Saída de dados
	if (media >= 8.5)
	{
		printf("O aluno pertence ao Conceito A: %f", media);
		printf("\nO aluno está aprovado!");
	}
	else if (media >= 7.5 && media < 8.5) 
    	{
	    	printf("O aluno pertence ao Conceito B: %f", media);
	    	printf("\nO aluno está aprovado!");
	    }
		else if (media >= 6.0 && media < 7.0)
			{
				printf("O aluno pertence ao Conceito C: %f", media);
				printf("\nO aluno está aprovado!");
			}
			else if (media < 6.0)
				{
					printf("O aluno pertence ao Conceito D: %f", media);
					printf("\nO aluno está reprovado!");
				}
}
