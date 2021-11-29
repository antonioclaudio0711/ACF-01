#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float contagem_homens, contagem_homens_nao, porcentagem;
	int i, sexo, escolha, contagem_sim, contagem_nao, contagem_mulheres_sim;
	contagem_sim = 0;
	contagem_nao = 0;
	contagem_mulheres_sim = 0;
	contagem_homens = 0;
	contagem_homens_nao = 0;
	
	for(i=0; i<=3; i++)
	{
		printf("\nInsira seu sexo (1 - feminino; 2 - masculino):");
		scanf("%i",&sexo);
		printf("\nInsira sua resposta sobre o lançamento do produto no mercado (1 - sim; 2 - não):");
		scanf("%i",&escolha);
		printf("\n*****************************");
		
		if(escolha == 1)
		{
			contagem_sim = contagem_sim + 1; 
		}
			else if(escolha == 2)
			{
				contagem_nao = contagem_nao + 1;
			}
		
		if(sexo == 1 && escolha == 1)
		{
			contagem_mulheres_sim = contagem_mulheres_sim + 1;
		}
		
		if(sexo == 2)
		{
			contagem_homens = contagem_homens + 1;
		}
		
		if(sexo == 2 && escolha == 2)
		{
			contagem_homens_nao = contagem_homens_nao + 1;
		}
	}
	
	porcentagem = contagem_homens_nao / contagem_homens;
	
	printf("\nDentre as pessoas entrevistadas, %i responderam que o produto deve ser lançado no mercado.", contagem_sim);
	printf("\nDentre as pessoas entrevistadas, %i responderam que o produto não deve ser lançado no mercado.", contagem_nao);
	printf("\nDentre as mulheres entrevistadas, %i responderam que o produto deve ser lançado no mercado.", contagem_mulheres_sim);
	printf("\nDentre os homens entrevistados, %.2f por cento responderam que o produto não deve ser lançado no mercado.", 100*porcentagem);
}

