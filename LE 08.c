/*
* UFMG - Universidade Federal de Minas Gerais
* COLTEC- Colégio Técnico
* PROF. Leandro Maia Silva
* Disciplina: Introdução a Programação 
* Ano: 2023

				Lista de Exercícios 08

	Instruções: Faça um arquivo .c para a lista inteira. As soluções deverão
	estar em um único arquivo e deverá existir um Menu com as opções para
	escolher qual exercício executar. O usuário deverá ficar no Menu até que
	escolha sair.
	Para cada questão chamada, implemente uma rotina de testes.

*/

#include <stdio.h>
#include <stdlib.h>
#define SUCESSO 0
#define TAM_MAX 10000

void menu(){

	printf("\n");
    printf("--------- Menu de Exercicios ---------\n");
    printf("(1) Questao 01\n");
    printf("(2) Questao 02\n");
    printf("(3) Questao 03\n");
    printf("(4) Questao 04\n");
    printf("(0) Sair\n");   
}

/*
	[F] Questão 01) 
	Faça um procedimento que leia os dados de uma matriz 5x5
	e um procedimento que a imprima.
*/

void leMatriz(){
	int matriz[5][5];
	int i, j;	

	printf("Digite os dados da matriz 5x5: ");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++)
			scanf("%d", &matriz[i][j]);	
	}
}

void imprimeMatriz(){
	int matriz[5][5];
	int i, j;	

	printf("\nImpressao da matriz 5x5: \n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("%d\t", matriz[i][j]);	
		}
		printf("\n");
	}
}


void questao01(){
	leMatriz();
	imprimeMatriz();
}

/*
	[F] Questão 02) 
	Crie uma função que receba uma matriz de números reais
	e retorne a soma dos elementos dessa matriz. As dimensões dessa matriz
	devem ser definidas através de duas constantes.
*/

#define linha 2
#define coluna 3

float matrizReal(float matriz[linha][coluna]){
	int i, j;
	float somaMatriz = 0;	

	printf("Digite os dados da matriz: ");
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			scanf("%f", &matriz[i][j]);	
		}
	}

	// processamento da soma dos elementos da matriz
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			somaMatriz += matriz[i][j]; 	
		}
	}

	return somaMatriz; 
}
void questao02(){
	float matriz[linha][coluna];
    printf("Soma dos elementos da matriz: %.2f\n", matrizReal(matriz));
}

/*
	[M] Questão 03) 
	Faça uma função que leia um vetor de tamanho N e uma
	função que leia uma matriz de tamanho N x N, onde N é definido através
	de uma constante. Faça uma função que recebe o vetor e a matriz e produza
	o resultado da multiplicação do vetor pela matriz.
	Além disso faça um procedimento que imprime a matriz com o resultado.
*/

#define N 2

void leVetor(){
	float vetor[N];	
	int i;

	printf("Digite os elementos do vetor[N]: ");	
	for(i=0; i<N; i++){
		scanf("%f", &vetor[i]);
	}
}

void leMatriz2(){
	float matriz[N][N];
	int i, j;

	printf("Digite os elementos da matriz NxN: ");
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			scanf("%f", &matriz[i][j]);
		}
	}

}

float prodVetor_Matriz(){
	float vetor[N], matriz[N][N], matrizProd[N][N];
	int i, j, k;

	for (i=0; i<N; i++) {
		for (j=0; j<N; j++) {
			matrizProd[i][j] = 0.0;

			for (k=0; k<N; k++) {
				matrizProd[i][j] += vetor[k]*matriz[k][j];
			}
		}
	}

	return matrizProd[N][N];
}

void imprimeVM(){
	float matrizProd[N][N];
	int i,j;

		printf("\nMatriz resultante do produto do vetor pela da matriz: \n");
		for(i=0; i<N; i++){
			printf("|");

			for(j=0; j<N; j++){
				printf(" %.2f ", matrizProd[i][j]);
			}

		printf("|\n");	
		}
}


void questao03(){
	leVetor();
	leMatriz2();
	prodVetor_Matriz();
	imprimeVM();
}

/*
	[M] Questão 04) 
	Faça um programa que leia a quantidade de um total de 5
	produtos que uma empresa tem em suas 7 lojas e imprimir em formato de
	tabela:
	• O total de cada produto nessas lojas
	• A loja que tem menos produtos.
*/

#define PROD 5
#define LOJA 7 

void questao04(){

	int estoque[PROD][LOJA];
	int i, j;
	int somaLojas[LOJA] = {0};
	int loja_menosProd = 1000000;
	int indice_loja_menos_prod;

	// preenche a matriz
	printf("Digite a quantidade de produtos em cada loja: ");
	for(i=0; i<PROD ; i++){
		for(j=0; j<LOJA; j++){
			scanf("%d", &estoque[i][j]);
		}
	}

	// imprime a matriz 
	printf("\n\tL1 \tL2 \tL3 \tL4 \tL5 \tL6 \tL7\n");
	for(i=0; i<PROD ; i++){
		printf("P%d\t", i+1);

		for(j=0; j<LOJA; j++){
			printf("%d\t", estoque[i][j]);
		}
		printf("\n");
	}

	// soma as colunas da matriz
	for(j=0; j<LOJA ; j++){
		for(i=0; i<PROD; i++){
			somaLojas[j] += estoque[i][j];
		}
	}

 	printf("\nTotal de cada produto nas lojas:\n");
    for (i=0; i<LOJA; i++) {
        printf("Loja %d: %d produtos\n", i+1, somaLojas[i]);

        	if(somaLojas[i]<loja_menosProd){
				loja_menosProd = somaLojas[i];
				indice_loja_menos_prod = i; 
			}
    }

	printf("\nLoja que possui menos produtos: L%d\n", indice_loja_menos_prod+1);
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


		else if(opcao == 4){
			printf("\nExecutando Questao 04...\n");
			questao04();
		}

		else if(opcao == 0){
			printf("\nFinalizando a execucao do programa.\nAte mais...\n");
			break;	
		}
	}

	return SUCESSO;
}	