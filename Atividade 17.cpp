#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i, idade, sexo, idade_total, contagem_mulheres, idade_mulheres, contagem_homens, idade_homens;
	float media, media_mulheres, media_homens;
	idade_total = 0;
	contagem_mulheres = 0;
	idade_mulheres = 0;
	contagem_homens = 0;
	idade_homens = 0;
	
	for(i=1; i<=7; i++)
	{
		printf("\nInsira sua idade:");
		scanf("%i",&idade);
		printf("\nInsira seu sexo (1 - feminino; 2 - masculino):");
		scanf("%i",&sexo);
		printf("\n*******************");
		
		idade_total = idade_total + idade;
		
		if(sexo == 1)
		{
			contagem_mulheres = contagem_mulheres + 1;
			idade_mulheres = idade_mulheres + idade;
		}
			else if(sexo == 2)
			{
				contagem_homens = contagem_homens + 1;
				idade_homens = idade_homens + idade;
			}
	}
	
	media = idade_total / 7;
	printf("\nA média de idade do grupo em estudo é de: %.2f anos.", media);
	
	media_mulheres = idade_mulheres / contagem_mulheres;
	printf("\nA média de idade do grupo de mulheres em estudo é de: %.2f anos.", media_mulheres);
	
	media_homens = idade_homens / contagem_homens;
	printf("\nA média de idade do grupo de homens em estudo é de: %.2f anos.", media_homens);
}
