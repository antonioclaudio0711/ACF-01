#include<stdio.h>
#include<math.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	
	int i, multiplica01, multiplica02, multiplica03, multiplica04, multiplica05, multiplica06, multiplica07, multiplica08, multiplica09, multiplica10;
	
	printf("** TABUADA DO 01 **");
	for(i=0; i<=10; i++)
	{
		multiplica01 = 1 * i;
		printf("\n1 * %i = %i\n", i, multiplica01);
	}
	
	printf("\n");
	
	printf("** TABUADA DO 02 **");
	for(i=0; i<=10; i++)
	{
		multiplica02 = 2 * i;
		printf("\n2 * %i = %i\n", i, multiplica02);
	}
	
	printf("\n");
	
	printf("** TABUADA DO 03 **");
	for(i=0; i<=10; i++)
	{
		multiplica03 = 3 * i;
		printf("\n3 * %i = %i\n", i, multiplica03);
	}
	
	printf("\n");
	
	printf("** TABUADA DO 04 **");
	for(i=0; i<=10; i++)
	{
		multiplica04 = 4 * i;
		printf("\n4 * %i = %i\n", i, multiplica04);
	}
	
	printf("\n");
	
	printf("** TABUADA DO 05 **");
	for(i=0; i<=10; i++)
	{
		multiplica05 = 5 * i;
		printf("\n5 * %i = %i\n", i, multiplica05);
	}
	
	printf("\n");
	
	printf("** TABUADA DO 06 **");
	for(i=0; i<=10; i++)
	{
		multiplica06 = 6 * i;
		printf("\n6 * %i = %i\n", i, multiplica06);
	}
	
	printf("\n");
	
	printf("** TABUADA DO 07 **");
	for(i=0; i<=10; i++)
	{
		multiplica07 = 7 * i;
		printf("\n7 * %i = %i\n", i, multiplica07);
	}
	
	printf("\n");
	
	printf("** TABUADA DO 08 **");
	for(i=0; i<=10; i++)
	{
		multiplica08 = 8 * i;
		printf("\n8 * %i = %i\n", i, multiplica08);
	}
	
	printf("\n");
	
	printf("** TABUADA DO 09 **");
	for(i=0; i<=10; i++)
	{
		multiplica09 = 9 * i;
		printf("\n9 * %i = %i\n", i, multiplica09);
	}
	
	printf("\n");
	
	printf("** TABUADA DO 10 **");
	for(i=0; i<=10; i++)
	{
		multiplica10 = 10 * i;
		printf("\n10 * %i = %i\n", i, multiplica10);
	}
}
