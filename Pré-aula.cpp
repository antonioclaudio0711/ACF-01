#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>

typedef struct aluno ALUNO;
struct aluno {
	int numero;
	char nome[30];
	char curso[30];
	float nota1;
	float nota2;
};


main() {
	setlocale(LC_ALL,"Portuguese");
	
	FILE* arquivo;
	ALUNO sala;
	
	arquivo = fopen("ALUNOS.txt", "a");
	
	if(arquivo == NULL) {
		printf("Problemas na criação do arquivo!");
	} else {
		do{
			printf("Insira o número do aluno:");
			scanf("%i",&sala.numero);
			fprintf(arquivo, "%i", sala.numero);
			
			printf("Insira o nome do aluno:");
			scanf("%s",&sala.nome);
			fprintf(arquivo, "%s", sala.nome);
	
			printf("Insira o curso do aluno:");
			scanf("%s",&sala.curso);
			fprintf(arquivo, "%s", sala.curso);		
			
			printf("Insira a primeira nota do aluno:");
			scanf("%f",&sala.nota1);
			fprintf(arquivo, "%.2f", sala.nota1);
			
			printf("Insira a segunda nota do aluno:");
			scanf("%f",&sala.nota2);
			fprintf(arquivo, "%.2f", sala.nota2);
			
			
			printf("Deseja continuar(s/n)?");
			printf("\n");
			
		} while(getche() == 's');
		fclose(arquivo);
	}
}
