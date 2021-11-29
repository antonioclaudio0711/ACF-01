#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, contagem;
	double produto;
	contagem = 0;
	produto = 1;
	
	for(i=92; i<=1478; i++)
	{
		for(j=1; j<=i; j++)
		{
			if(i%j == 0)
			{
				contagem = contagem + 1;
			}
		}
		if(contagem == 2)
		{
			produto = produto * i;
		}
		contagem = 0;
	}
	printf("O produto dos números primos existentes entre 92 e 1478 é: %lf.", produto);
}
