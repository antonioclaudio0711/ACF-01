#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i, idade, soma_idades, contagem01, contagem02, contagem03;
	float peso, altura, media_idades, porcentagem;
	soma_idades = 0;
	contagem01 = 0;
	contagem02 = 0;
	contagem03 = 0;
	
	for(i=1; i<=10; i++)
	{
		printf("\nInsira sua idade:");
		scanf("%i",&idade);
		printf("\nInsira seu peso:");
		scanf("%f",&peso);
		printf("\nInsira sua altura:");
		scanf("%f",&altura);
		printf("\n*************");
		
		soma_idades = soma_idades + idade;
		
		if(peso > 90 && altura < 1.50)
		{
			contagem01 = contagem01 + 1;
		}
		
		if(altura > 1.90)
		{
			contagem02 = contagem02 + 1;
		}
		
		if(idade > 10 && idade < 30 && altura > 1.90)
		{
			contagem03 = contagem03 + 1;
		}
	}
	
	media_idades = soma_idades / 10;
	printf("\nA média das idades das pessoas analisadas é de %.2f anos.", media_idades);
	printf("\nDentre as pessoas analisadas, %i possuem mais de 90 kg tendo menos de 1,50 m de altura.", contagem01);
	
	porcentagem = 100 * contagem03 / contagem02;
	printf("\n%f por cento das pessoas com mais de 1,90 m de altura possuem idade entre 10 e 30 anos.");
}
