/*
* UFMG - Universidade Federal de Minas Gerais
* COLTEC- Colégio Técnico
* PROF. Leandro Maia Silva
* Disciplina: Introdução a Programação 
* Ano: 2023
* Data: 02/07/2023
*
		Lista de Exercícios 11

	Instruções: Faça um arquivo .c para a lista inteira. As soluções deverão
	estar em um único arquivo e deverá existir um Menu com as opções para
	escolher qual exercício executar. O usuário deverá ficar no Menu até que
	escolha sair.
	Para cada questão chamada, implemente uma rotina de testes.
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SUCESSO 0


void menu(){

	printf("\n");
    printf("--------- Menu de Exercicios ---------\n");
    printf("(1) Questao 01\n");
    printf("(2) Questao 02\n");
    printf("(3) Questao 03\n");        
    printf("(0) Sair\n");   

}

/*
	[F] Questão 01) 
	Faça uma função que retorne o número de linhas de um arquivo.
*/

void questao01(){

	FILE *arquivo;
	int numLinhas = 0;
	char linha[100]; 
	
	arquivo = fopen ("arquivo.txt", "w"); 		// abertura do arquivo para escrita  

	if(arquivo == NULL){
		printf("Erro ao abrir o arquivo!\n");
	}

	// preenchendo o arquivo
	fprintf(arquivo, "%s\n", "aaaaa" );
	fprintf(arquivo, "%s\n", "bbbbb" );
	fprintf(arquivo, "%s\n", "ccccc" );
	fprintf(arquivo, "%s\n", "dddddeeeee" );

	fclose(arquivo);

	arquivo = fopen ("arquivo.txt", "r"); 		// abertura do arquivo para leitura 

	if(arquivo == NULL){
		printf("Erro ao abrir o arquivo!\n");
	}

    while (fgets(linha, 100, arquivo) != NULL) {
        numLinhas++;
    }


	printf("Numero de linhas do arquivo: %d\n", numLinhas);

	fclose(arquivo);
}

/*
	Questão 02) 
	Faça uma função que retorne o número de caracteres de
	um arquivo. Espaços e quebras de linha não devem ser contados.

*/

void questao02(){

	FILE *arquivo;
    int cont = 0;
    int caractere;

	arquivo = fopen ("texto.txt", "r"); 	

	if(arquivo == NULL){
		printf("Erro ao abrir o arquivo!\n");
	}

    while ((caractere = fgetc(arquivo)) != EOF) {
        
    	if(caractere != '\n' && caractere != ' ')
			cont++;
    }

    printf("Numero de caracteres do arquivo: %d\n", cont);

    fclose(arquivo);
}

/*
	Questão 03) 
	Faça um programa que leia de um arquivo as informações
	sobre o nome e as 2 notas de diversos alunos. Imprima a listagem de
	alunos e suas respectivas médias. O programa deve criar o arquivo de
	entrada e criar um arquivo de saída com o nome e a média de cada aluno.
	Armazene as informações dos alunos em um registro (struct).

	Questão 04) 
	Adicione ao programa anterior uma função para calcular
	o desvio padrão e a variância das médias dos alunos. Grave essa
	informação no final do arquivo de saída.

*/

struct aluno{
	
	char nome[100];
	float nota1;
	float nota2;
	float media;
	float variancia;
	float desvioPadrao;	

};

void questao03(){

	struct aluno a1[100];
	FILE *arquivoEntrada;
	FILE *arquivoSaida;
	int i;
	int qtd;


	printf("Digite a quantidade de alunos: ");
	scanf("%d", &qtd);

	for(i=1; i<=qtd; i++){

		printf("Digite o nome do aluno[%d]: ", i);
        scanf("%s", a1[i].nome);

		printf("Digite a nota 1 do aluno[%d]: ", i);
		scanf("%f", &(a1[i].nota1));

		printf("Digite a nota 2 do aluno[%d]: ", i);
		scanf("%f", &(a1[i].nota2)) ;	

		a1[i].media = (a1[i].nota1 + a1[i].nota2) / 2.0 ;

		a1[i].variancia =  ( (a1[i].nota1 - a1[i].media) * (a1[i].nota1 - a1[i].media) + (a1[i].nota2 - a1[i].media) * (a1[i].nota2 - a1[i].media)  ) / 2.0 ;

		a1[i].desvioPadrao = sqrt ( a1[i].variancia );

		printf("\n");
	}

	arquivoEntrada = fopen ("arquivoEntrada.txt", "w"); 	
	if(arquivoEntrada == NULL){
		printf("Erro ao abrir o arquivo!\n");
	}


	arquivoSaida = fopen("arquivoSaida.txt", "w"); 				
	if (arquivoSaida == NULL) {
	    printf("Erro ao criar o arquivo de saída.\n");
	}

 	// Grava os dados dos alunos
	for(i=1; i<=qtd; i++){

	    fprintf(arquivoEntrada, "Nome: %s\nNota1: %.2f\nNota2: %.2f\n\n", a1[i].nome, a1[i].nota1, a1[i].nota2);
	    fprintf(arquivoSaida, "Nome: %s\nNota1: %.2f\nNota2: %.2f\n", a1[i].nome, a1[i].nota1, a1[i].nota2);
		fprintf(arquivoSaida, "Media: %.2f\n", a1[i].media);
		fprintf(arquivoSaida, "Desvio Padrao: %.2f\n", a1[i].desvioPadrao);		
		fprintf(arquivoSaida, "Variancia: %.2f\n\n", a1[i].variancia);
	}

	fclose(arquivoEntrada);
	fclose(arquivoSaida);
}



int main(int argc, char ** argv){
	int opcao;
	
	while(1){

		menu();
		printf("=> Digite a opcao que deseja: ");
		scanf("%d", &opcao);
        getchar(); 					// Limpar o buffer de entrada
		

		if(opcao == 1){
			printf("\nExecutando Questao 01...\n");
			questao01();
		}
	
		else if(opcao == 2){
			printf("\nExecutando Questao 02...\n");
			questao02();
		}

		else if(opcao == 3){	
			printf("\nExecutando Questao 03...\n");		
			questao03();
		}


		else if(opcao == 0){
			printf("\nFinalizando a execucao do programa.\nAte mais...\n");
			break;	
		}
	}

	return SUCESSO;
}	