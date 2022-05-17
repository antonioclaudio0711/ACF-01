#include<stdio.h>
#include<locale.h>
#include<math.h>

void programa06(int x, float y);

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int escolhasexo;
	float alt;
	
	printf("********************\n");
	printf("	SEXO		\n");
	printf("1 - Feminino\n");
	printf("2 - Masculino\n");
	printf("********************\n");
	printf("\n");
	printf("Selecione uma das opções para indicar seu sexo:");
	scanf("%i",&escolhasexo);
	printf("\n");
	printf("Agora, insira sua altura:");
	scanf("%f",&alt);
	
	programa06(escolhasexo, alt);
}

void programa06(int x, float y)
{
	float pesoideal;
	
	if(x == 1)
	{
		pesoideal = (62.1 * y) - 44.7;
		printf("O peso ideal para uma mulher com altura de %.2fm é %.2fKG.", y, pesoideal);
	}
	else if(x == 2)
	{
		pesoideal = (72.7 * y) - 58;
		printf("O peso ideal para um homem com altura de %.2fm é %.2fKG.", y, pesoideal);
	}
}
