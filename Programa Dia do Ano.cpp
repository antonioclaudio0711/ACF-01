#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int dia, mes, dia_do_ano;
	
	printf("Insira a numeração referente ao dia:");
	scanf("%i",&dia);
	printf("Insira a numeração referente ao mês:");
	scanf("%i",&mes);
	if (mes == 1)
	{
		dia_do_ano = dia; 
	}
		else if (mes == 2)
		{
			dia_do_ano = dia + 31;
		}
			else if (mes == 3)
			{
				dia_do_ano = dia + 59;
			}
				else if (mes == 4)
				{
					dia_do_ano = dia + 90;
				}
					else if (mes == 5)
					{
						dia_do_ano = dia + 120;
					}
						else if (mes == 6)
						{
							dia_do_ano = dia + 151;
						}
							else if (mes == 7)
							{
								dia_do_ano = dia + 181;
							}
								else if (mes == 8)
								{
									dia_do_ano = dia + 212;
								}
									else if (mes == 9)
									{
										dia_do_ano = dia + 243;
									}
										else if (mes == 10)
										{
											dia_do_ano = dia + 273;
										}
											else if (mes == 11)
											{
												dia_do_ano = dia + 304;
											}
												else if (mes == 12)
												{
													dia_do_ano = 365 - dia;
												}
	printf("O dia %i do mês %i corresponde ao dia %i do ano.", dia, mes, dia_do_ano);
}
