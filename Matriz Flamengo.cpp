#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int i, j;
	char matriz[3][3];
	
	for(i=0; i<1; i++)
	{
		for(j=0; j<1; j++)
		{
			printf("[F] ");
		}
	}
	
	for(i=0; i<1; i++)
	{
		for(j=1; j<2; j++)
		{
			printf("[L] ");
		}
	}
	
	for(i=0; i<1; i++)
	{
		for(j=2; j<3; j++)
		{
			printf("[A] ");
		}
	}
	
	for(i=1; i<2; i++)
	{
		for(j=0; j<1; j++)
		{
			printf("\n[M] ");
		}
	}
	
	for(i=1; i<2; i++)
	{
		for(j=1; j<2; j++)
		{
			printf("[E] ");
		}
	}
	
	for(i=1; i<2; i++)
	{
		for(j=2; j<3; j++)
		{
			printf("[N] ");
		}
	}
	
	for(i=2; i<3; i++)
	{
		for(j=0; j<1; j++)
		{
			printf("\n[G] ");
		}
	}
	
	for(i=2; i<3; i++)
	{
		for(j=1; j<2; j++)
		{
			printf("[O] ");
		}
	}
	
	for(i=2; i<3; i++)
	{
		for(j=2; j<3; j++)
		{
			printf("[<3] ");
		}
	}
}
