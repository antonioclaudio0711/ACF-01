#include<stdio.h>
#include<math.h>
#include<locale.h>

int programa04(int x, int y, int z, int w);

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int hora_inicio, minutos_inicio, hora_final, minutos_final;
	int resposta;
	
	printf("Insira a hora em que se iniciou a partida (00 -- 23):");
	scanf("%i",&hora_inicio);
	printf("Insira os minutos em que se iniciou a partida (00 -- 59):");
	scanf("%i",&minutos_inicio);
	printf("Insira a hora em que se encerrou a partida (00 -- 23):");
	scanf("%i",&hora_final);
	printf("Insira os minutos em que se encerrou a partida (00 - 59):");
	scanf("%i",&minutos_final);
	
	resposta = programa04(hora_inicio, minutos_inicio, hora_final, minutos_final);
	printf("A partida em questão apresentou uma duração de %i minutos.", resposta);
}

int programa04(int x, int y, int z, int w)
{
	int duracao_horas, duracao_minutos, duracao_total;
	
	if(z < x)
	{
		duracao_horas = (z + 24) - x;
	}
	else
	{
		duracao_horas = z - x;
	}
	
	duracao_minutos = w - y;
	
	duracao_total = (duracao_horas * 60) + duracao_minutos;
	return duracao_total;
}
