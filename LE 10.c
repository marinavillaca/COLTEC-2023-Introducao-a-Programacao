/*
* UFMG - Universidade Federal de Minas Gerais
* COLTEC- Colégio Técnico
* PROF. Leandro Maia Silva
* Disciplina: Introdução a Programação 
* Ano: 2023
* Data: 20/06/2023
*
* 			Lista de Exercícios 10

	Instruções: Faça um arquivo .c para a lista inteira. As soluções deverão
	estar em um único arquivo e deverá existir um Menu com as opções para
	escolher qual exercício executar. O usuário deverá ficar no Menu até que
	escolha sair.
	Para cada questão chamada, implemente uma rotina de testes.
*
*
*/

#include <stdio.h>
#include <stdlib.h>
#define SUCESSO 0
#define TAM_MAX 1000

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
	Faça uma função para leitura dos dados de um aluno. 
	Os dados a serem guardados na estrutura aluno são as seguintes:
	• Nome
	• Curso
	• Idade
	Faça uma função que imprime os dados de um aluno.
	Faça uma função que imprime os dados de um vetor de alunos.

*/
struct aluno{
	char nome[TAM_MAX];
	char curso[TAM_MAX];
	int idade;	
};

void leAluno(void){

	struct aluno a1;

	printf("\nParte I\n");
	printf("Digite o nome do aluno: ");
	fgets(a1.nome, TAM_MAX, stdin); 	// le a string nome

	printf("Digite o curso do aluno: ");
	fgets(a1.curso, TAM_MAX, stdin); 	// le a string curso

	printf("Digite a idade do aluno: ");
	scanf("%d", &(a1.idade));				// le o int idade

 	getchar();
}

void imprimeAluno(void){
	struct aluno a1;

	printf("\nNome do aluno: %s", a1.nome);
	printf("Nome do curso: %s", a1.curso);
	printf("Idade do aluno: %d\n", a1.idade);
}

void vetorAlunos(void){

	struct aluno a1[TAM_MAX];
	int num, i;

	printf("\nParte II\n");
	printf("Digite a quantidade de alunos da sala: ");
	scanf("%d", &num);

 	getchar(); 

	// Armazenando elementos do vetor de estruturas
	for(i=1; i<=num; i++){

        printf("\nDigite o nome do aluno %d: ", i);
        scanf("%s", a1[i].nome);		

        printf("Digite o curso do aluno %d: ", i);
        scanf("%s", a1[i].curso);	

        printf("Digite a idade do aluno %d: ", i);
        scanf("%d", &(a1[i].idade));	        

        getchar();

        printf("\n");
	}

	// Imprimindo elementos do vetor de estruturas
	for(i=1; i<=num; i++){

        printf("Nome do aluno %d: %s\n", i, a1[i].nome);
        printf("Curso do aluno %d: %s\n", i, a1[i].curso);
        printf("Idade do aluno %d: %d\n\n", i, a1[i].idade);
	}

}

void questao01(void){
	leAluno();
	imprimeAluno();
	vetorAlunos();
}


/*
	[M] Questão 02) 
	Duplique a estrutura do exercício anterior e adicione
	um campo com três notas. Modifique todas as funções associadas para
	tratar as notas. Além das alterações, crie uma função que, dado um aluno,
	calcule a média de suas notas.

*/

struct aluno_completo{

	char nome[TAM_MAX];
	char curso[TAM_MAX];
	int idade;
	float nota1;
	float nota2;
	float nota3;

};


void questao02(void){

	struct aluno_completo a1[TAM_MAX];
	int num, i;
	float soma[TAM_MAX] = {0}, media[TAM_MAX];

	printf("\nParte III\n");
	printf("Digite a quantidade de alunos da sala: ");
	scanf("%d", &num);

 	getchar(); 

	// Armazenando elementos do vetor de estruturas
	for(i=1; i<=num; i++){

        printf("\nDigite o nome do aluno %d: ", i);
        scanf("%s", a1[i].nome);		

        printf("Digite o curso do aluno %d: ", i);
        scanf("%s", a1[i].curso);	

        printf("Digite a idade do aluno %d: ", i);
        scanf("%d", &(a1[i].idade));	        

        printf("Digite a nota 1 do aluno %d: ", i);
        scanf("%f", &(a1[i].nota1));

        printf("Digite a nota 2 do aluno %d: ", i);
        scanf("%f", &(a1[i].nota2));

        printf("Digite a nota 3 do aluno %d: ", i);
        scanf("%f", &(a1[i].nota3));                

        soma[i] = a1[i].nota1 + a1[i].nota2 + a1[i].nota3;
        media[i] = soma[i]/3;

        getchar();

        printf("\n");
	}

	// Imprimindo elementos do vetor de estruturas
	for(i=1; i<=num; i++){

        printf("Nome do aluno %d: %s\n", i, a1[i].nome);
        printf("Curso do aluno %d: %s\n", i, a1[i].curso);
        printf("Idade do aluno %d: %d\n", i, a1[i].idade);
        printf("Nota 1 do aluno %d: %.2f\n", i, a1[i].nota1);
        printf("Nota 2 do aluno %d: %.2f\n", i, a1[i].nota2);
        printf("Nota 3 do aluno %d: %.2f\n", i, a1[i].nota3);
        printf("Media do aluno %d: %.2f\n\n", i, media[i]);

	}
}

/*
	[D] Questão 03) 
	Faça um programa que vá lendo os alunos enquanto o
	usuário desejar, em seguida imprima todos os registros inseridos.
*/

void questao03(){

	int tecla;
	int i=1, count=0;
	struct aluno_completo a1[TAM_MAX];
	float soma[TAM_MAX] = {0}, media[TAM_MAX];	

	printf("Escola ABC- Dados dos Alunos\n");

	while(1){

		printf("\nDigite o nome do aluno %d: ", i);
        scanf("%s", a1[i].nome);		

        printf("Digite o curso do aluno %d: ", i);
        scanf("%s", a1[i].curso);	

        printf("Digite a idade do aluno %d: ", i);
        scanf("%d", &(a1[i].idade));	        

        printf("Digite a nota 1 do aluno %d: ", i);
        scanf("%f", &(a1[i].nota1));

        printf("Digite a nota 2 do aluno %d: ", i);
        scanf("%f", &(a1[i].nota2));

        printf("Digite a nota 3 do aluno %d: ", i);
        scanf("%f", &(a1[i].nota3));                

        soma[i] = a1[i].nota1 + a1[i].nota2 + a1[i].nota3;
        media[i] = soma[i]/3;

        getchar();

        printf("\n");

		i++;
		count++;

		printf("Digite 1 - Continuar \n");	
		printf("Digite 0 - Sair \n");	
		scanf("%d", &tecla);
		printf("\n");
		
		if(tecla == 0){
			break;
		}

	}

		for(i=1; i<=count; i++){

	        printf("Nome do aluno %d: %s\n", i, a1[i].nome);
	        printf("Curso do aluno %d: %s\n", i, a1[i].curso);
	        printf("Idade do aluno %d: %d\n", i, a1[i].idade);
	        printf("Nota 1 do aluno %d: %.2f\n", i, a1[i].nota1);
	        printf("Nota 2 do aluno %d: %.2f\n", i, a1[i].nota2);
	        printf("Nota 3 do aluno %d: %.2f\n", i, a1[i].nota3);
	        printf("Media do aluno %d: %.2f\n\n", i, media[i]);

		}
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