// Aluno: Antônio Claudio Ferreira Filho

#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>

void jogada();

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	jogada();
}

void jogada()
{
	int cara_coroa, i, contagem_coroa, contagem_cara;
	contagem_coroa = 0;
	contagem_cara = 0;
	
	srand(time(NULL));
	
	for(i=1; i<=100; i++)
	{
		cara_coroa = rand()%2;
		printf("%i", cara_coroa);
		
		if(cara_coroa == 0)
		{
			printf("--> coroa\n");
			contagem_coroa = contagem_coroa + 1;
		}
		else if(cara_coroa == 1)
		{
			printf("--> cara\n");
			contagem_cara = contagem_cara + 1;
		}
	}
	printf("***********************************************************\n");
	printf("Ao lançar a moeda 100 vezes, obteve-se %i coroas e %i caras.", contagem_coroa, contagem_cara);
}
