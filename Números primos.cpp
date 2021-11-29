/*
Faça um algoritmo que calcule e mostre os números primos de 1 até 500.
- lembre-se que números primos são aqueles que podem ser divididos somente por 01 e por eles mesmos. Desta forma, números primos são divisíveis somente duas vezes. ---> 1, 2, 3, 5, 7, 11, 13 ...
- Um número é considerado divisível por outro quando o resto da dic=visão é igual a zero;
*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, cont;
	cont = 0;
	
	for(i=1; i<=500; i++)
	{
		for(j=1; j<=i; j++)
		{
			if(i%j == 0)
			{
				cont = cont + 1;
			}
		}
		if(cont == 2)
		{
			printf("%i - ", i);
		}
		cont = 0;
	}
	
}

