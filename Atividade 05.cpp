#include<stdio.h>
#include<math.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	char nome_do_cliente[41];
	float valor_das_compras, bonus;
	
	printf("Insira o primeiro nome do cliente:");
	scanf("%s", nome_do_cliente);
	printf("Insira o valor total referente �s compras realizadas no ano passado pelo cliente em quest�o:");
	scanf("%f", valor_das_compras);
	
	if(valor_das_compras < 1000)
	{
		bonus = 0.1 * valor_das_compras;
		printf("Voc� recebeu um b�nus de 10%, o que equivale a %.2f.", bonus);
	}
		else if (valor_das_compras >= 1000)
		{
			bonus = 0.15 * valor_das_compras;
			printf("Voc� recebeu um b�nus de 15%, o que equivale a %.2f.", bonus);
		}
}
