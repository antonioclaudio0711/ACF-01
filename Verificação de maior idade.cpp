#include<stdio.h>
#include<math.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i, idade, contagem;
	contagem = 0;
	
	for(i=1; i<=10; i++)
	{
		printf("Insira sua idade:");
		scanf("%i",&idade);
		
		if(idade >= 18)
		{
			contagem = contagem + 1;
		}
	}
	
	printf("Das pessoas que inseriram sua idade, %i possuem 18 anos ou mais.", contagem);
}
