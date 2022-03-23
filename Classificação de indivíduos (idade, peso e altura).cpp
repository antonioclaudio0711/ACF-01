#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i, idade, contagem, contagem02, contagem03;
	float altura, peso, soma_altura, media_altura, porcentagem;
	contagem = 0;
	contagem02 = 0;
	contagem03 = 0;
	soma_altura = 0;
	
	for(i=1; i<=25; i++)
	{
		printf("\nInsira sua idade:");
		scanf("%i",&idade);
		printf("\nInsira a sua altura:");
		scanf("%f",&altura);
		printf("\nInsira seu peso:");
		scanf("%f",&peso);
		printf("\n***********************");
		
		if(idade > 50)
		{
			contagem = contagem + 1; 
		}
			else if(idade >= 10 && idade <= 20)
			{
				contagem02 = contagem02 + 1;
				soma_altura = soma_altura + altura; 
			}
		
		if(peso < 40)
		{
			contagem03 = contagem03 + 1;
		}
	}
	
	printf("\nDentre as pessoas analisadas, %i possuem mais de 50 anos.", contagem);
	
	media_altura = soma_altura / contagem02;
	printf("\nA média da altura de pessoas com idade entre 10 e 20 anos é de: %.2f.", media_altura);
	
	porcentagem = 100 * contagem03 / 25;
	printf("\n%f por cento das pessoas analisadas possuem peso inferior a 40 kg.", porcentagem);
}
