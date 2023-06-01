/*
* UFMG - Universidade Federal de Minas Gerais
* COLTEC- Colégio Técnico
* PROF. Leandro Maia Silva
* Disciplina: Introdução a Programação 
* Ano: 2023


					Lista de Exercícios 06

		[F] Questão 01) Faça um programa que leia, via teclado, 20 valores do
		tipo inteiro e determine qual o menor e o maior valor, além disso informe
		o índice do menor e do maior.
		Considere que todos os elementos possuem valores distintos.

		[F] Questão 02) Desenvolva um programa que leia um vetor de números
		reais, um escalar e imprima o resultado da multiplicação do vetor pelo
		escalar.

		[F] Questão 03) Faça um programa que leia 2 vetores de tamanho 10 e
		calcule o produto escalar deles.

		[F] Questão 04) Faça um programa que leia um vetor de um tamanho escolhido
		pelo usuário e calcule a média aritmética de seus valores.
		Atenção! Você deve determinar o máximo para que o exercício seja factível
		com o assunto estudado até o momento.

		[M] Questão 05) Faça uma cópia da questão 01 e crie três funções que:
		1) dado um vetor e seu tamanho, determine o menor valor presente.
		2) dado um vetor e seu tamanho, determine o maior valor presente.
		3) dado um vetor, seu tamanho e um valor, determine o índice onde esse
		valor foi encontrado no vetor.
		Modifique a questão para encontrar a solução usando as três funções
		criadas.

		[M] Questão 06) Faça uma cópia da questão 02 e crie uma função que, dado
		um vetor, seu tamanho e um escalar, calcule o resultado da multiplicação
		do vetor pelo escalar.
		Modifique a questão para encontrar a solução usando a função criada.

		[M] Questão 07) Faça uma cópia da questão 03 e crie uma função que, dado
		dois vetores e seus tamanhos (mesmo tamanho para ambos), calcule o
		resultado do produto escalar deles.
		Modifique a questão para encontrar a solução usando a função criada.

		[D] Questão 08) Fazer uma função para calcular os N primeiros números
		de Fibonacci. Essa função deve receber um vetor e seu tamanho.
		Em seguida faça um programa para calcular e mostrar os N primeiros termos
		da série de Fibonacci. O número N é fornecido pelo usuário. A série de
		Fibonacci é : 1 1 2 3 5 8 13 ... Isto é f1 = f2 = 1, f3 = f1 + f2, f4 =
		f2 + f3							

*/

#include <stdio.h>
#define SUCESSO 0
#define TAM_MAX 10000

void menu(){
    printf("\n--------- Menu de Exercicios ---------\n");
    printf("(1) Questao 01\n");
    printf("(2) Questao 02\n");
    printf("(3) Questao 03\n");
    printf("(4) Questao 04\n");
    printf("(5) Questao 05\n");
    printf("(6) Questao 06\n");
    printf("(7) Questao 07\n");
    printf("(8) Questao 08\n");
    printf("(0) Sair\n");   
    printf("Selecione a opcao que deseja: ");
}


void questao01(){
	int maior=-1, menor=1000;
	int iMaior, iMenor;
	int vetor[21];
	int i;

	printf("Digite 20 valores para preencher o vetor: ");
	for(i=1; i<=20; i++){
		scanf("%d", &vetor[i]);

		if(vetor[i]>maior){
			maior = vetor[i];
			iMaior = i;
		}

		if (vetor[i]<menor){
			menor = vetor[i];
			iMenor = i;
		}
	}

	printf("Maior valor: %d; Indice: %d.\n", maior, iMaior);
	printf("Menor valor: %d; Indice: %d.\n", menor, iMenor);
}

void questao02(){
	float vetorReais[4];
	int escalar;
	int i;

	printf("Digite um escalar p/ multiplicar o vetor: ");
	scanf("%d", &escalar);

	printf("Digite os elementos do vetor: ");

	for(i=1; i<5 ;i++){
		scanf("%f", &vetorReais[i]);
		printf("%.1f x %d = %.1f\n", vetorReais[i] ,escalar, escalar*vetorReais[i]);
	}
}

#define TAM 10

void questao03(){
	float vetor1[TAM];
	float vetor2[TAM];
	int i;
	float prodEscalar = 0;

	for(i=1; i<=TAM; i++){
		printf("Digite o vetor1[%d]: ", i);
		scanf("%f", &vetor1[i]);
		printf("Digite o vetor2[%d]: ", i);
		scanf("%f", &vetor2[i]);

		prodEscalar += vetor1[i]*vetor2[i];
		printf("\n");
	}
	printf("Produto Escalar: %.1f\n", prodEscalar); 
}

void questao04(){
	float vetor[TAM_MAX];
	float media = 0, soma = 0;
	int dimensao;
	int i=0;

	printf("Digite a dimensao do vetor: ");
	scanf("%d", &dimensao);

	for(i=1; i<=dimensao; i++){
		printf("Digite o valor[%d] do vetor: ", i);
		scanf("%f", &vetor[i]);

		soma += vetor[i]; 
	}

	media = soma/dimensao;
	printf("Media dos valores do vetor: %.1f\n", media);
}

void menorVetor(){
	int menor=1000;
	int vetor[TAM_MAX];
	int i;
	int iMenor;

	printf("Prencha o vetor com valores para ver quem eh o MENOR: ");
	for(i=1; i<=5; i++){
		scanf("%d", &vetor[i]);

		if (vetor[i]<menor){
			menor = vetor[i];
			iMenor = i;
		}	
	}
	printf("Menor valor: %d; Indice: %d.\n\n", menor, iMenor);
}


void maiorVetor(){
	int maior=1;
	int vetor[TAM_MAX];
	int i;
	int iMaior;

	printf("Prencha o vetor com valores para ver quem eh o MAIOR: ");
	for(i=1; i<=5; i++){
		scanf("%d", &vetor[i]);

		if (vetor[i]>maior){
			maior = vetor[i];
			iMaior = i;
		}	
	}
	printf("Maior valor: %d; Indice: %d.\n\n", maior, iMaior);
}

void questao05(){
	 maiorVetor();
	 menorVetor();
}

// ja fiz a funcao pedida na questao 02
void questao06(){
}

// ja fiz a funcao pedida na questao 03
void questao07(){
}

void questao08(){
	int vetor[TAM_MAX];
	int n;
	int i;

	vetor [0] = 1;
	vetor [1] = 1;

	printf("- Serie de Fibonacci -\n");
	printf("Digite a qtd de termos da serie: ");
	scanf("%d", &n);

	for(i=2; i<n; i++){
		vetor[i] = vetor[i-1] + vetor[i-2];
	}


	printf("Os %d primeiros termos da serie de Fibonacci sao:", n);

	for(int i=0; i<n; i++)
		printf(" %d ", vetor[i]);

	printf("\n");
}

int main(int argc, char ** argv){
	
	while(1){
		menu();
		int opcao;
		scanf("%d", &opcao);

		if(opcao==1){
			printf("\nExecutando Questao 01...\n");
			questao01();
		}
			
		else if(opcao==2 || opcao==6){
			printf("\nExecutando Questao 02...\n");
			questao02();
		}

		else if(opcao==3 || opcao==7){	
			printf("\nExecutando Questao 03...\n");		
			questao03();
		}
		else if(opcao==4){
			printf("\nExecutando Questao 04...\n");
			questao04();
		}

		else if(opcao==5){
			printf("\nExecutando Questao 05...\n");
			questao05();
		}
		else if(opcao==8){
			printf("\nExecutando Questao 08...\n");		
			questao08();
		}

		else if(opcao==0){
			printf("\nFinalizando a execucao do programa.\nAte mais...\n");
			break;	
		}

	}
	return SUCESSO;
}	
