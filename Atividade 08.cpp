#include<stdio.h>
#include<math.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i, idade, contagemA, contagemB, contagemC, contagemD, contagemE;
	float porcentagemA, porcentagemE;
	contagemA = 0;
	contagemB = 0;
	contagemC = 0;
	contagemD = 0;
	contagemE = 0;
	
	for(i=1; i<=15; i++)
	{
		printf("Insira a sua idade:");
		scanf("%i",&idade);
		
		if (idade <= 15)
		{
			contagemA = contagemA + 1;
		}
			else if (idade >= 16 && idade <= 30)
			{
				contagemB = contagemB + 1;
			}
				else if (idade >= 31 && idade <= 45)
				{
					contagemC = contagemC + 1;
				}	
					else if (idade >= 46 && idade <= 60)
					{
						contagemD = contagemD + 1;
					}
						else if (idade >= 61)
						{
							contagemE = contagemE + 1;
						}
					
			
	}
	
	printf("Existem %i pessoas na 1� faixa et�ria.", contagemA);
	printf("\nExistem %i pessoas na 2� faixa et�ria.", contagemB);
	printf("\nExistem %i pessoas na 3� faixa et�ria.", contagemC);
	printf("\nExistem %i pessoas na 4� faixa et�ria.", contagemD);
	printf("\nExistem %i pessoas na 5� faixa et�ria.", contagemE);
	
	printf("\n************");
	
	porcentagemA = 100 * contagemA / 15;
	printf("\n %f por cento das pessoas comp�em a primeira faixa et�ria.", porcentagemA);
	
	porcentagemE = 100 * contagemE / 15;
	printf("\n %f por cento das pessoas comp�em a �ltima faixa et�ria.", porcentagemE);
}
