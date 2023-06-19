/*
* UFMG - Universidade Federal de Minas Gerais
* COLTEC- Colégio Técnico
* PROF. Leandro Maia Silva
* Disciplina: Introdução a Programação 
* Ano: 2023
* Data: 17/06/2023


		Lista de Exercícios 09

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
    printf("(5) Questao 05\n");
    printf("(6) Questao 06\n");        
    printf("(0) Sair\n");   
}

/*
	[F] Questão 01) 
	Faça uma função que aloque dinamicamente um vetor de
	inteiros. Essa função deve receber como parâmetro um inteiro
	representando o tamanho do vetor e retornar um ponteiro com o endereço
	inicial do vetor alocado.

*/

int *alocaVetor(int TAM){
	int *vetor;

	// Alocando dinamicamente apenas o espaco necessario 
	vetor = (int*) malloc (TAM*sizeof(int));

 	if(vetor == NULL) {
        printf("Falha na alocação de memoria.\n");
     	return NULL;   
    }

    return vetor;

}

void questao01(void){
	int i, TAM;
	int *vetor;

	printf("Digite o tamanho do vetor: ");
	scanf("%d", &TAM);

	vetor = alocaVetor(TAM);

	for(i=0; i<TAM; i++){
		printf("Digite o elemento da posicao %d: ", i);
		scanf("%d", &vetor[i]);
	}

	// Libera o espaço reservado dinamicamente
	free(vetor);

}

/*
	[M] Questão 02) 
	Faça uma função que aloque dinamicamente uma matriz de
	números reais. Essa função deverá receber como parâmetro dois números
	inteiros representando o tamanho da matriz e retornar um ponteiro com o
	endereço inicial da matriz.
*/
float questao02(){
	int i, j;
	int linhas, colunas;
	float **matriz;

	printf("Digite o numero de linhas da matriz: ");
	scanf("%d", &linhas);
	printf("Digite o numero de colunas da matriz: ");
	scanf("%d", &colunas);

	// Alocando as linhas da matriz 
	matriz = (float**) malloc (linhas*sizeof(float*));

	if(matriz == NULL){
		printf("Erro: Memoria Insuficiente\n");
	}

	// Alocando as colunas da matriz 
	for(i=0; i<linhas; i++){
	matriz[i] = (float*) malloc (colunas*sizeof(float));

		if(matriz[i] == NULL){
			printf ("Erro: Memoria Insuficiente\n");
		}
	}

	// Libera as linhas da matriz
	for(i=0; i<linhas; i++){
		free(matriz[i]);
	}

	// Libera a matriz
	free(matriz);
}

/*
	[F] Questão 03) 
	Faça uma função que leia um vetor de um tamanho qualquer.
	Faça uma função que recebe um vetor e calcule e média aritmética dos
	elementos desse vetor.
*/


float *alocaVetorFloat(int tamanho) {
    float *vetor;

    vetor = (float*) malloc(tamanho*sizeof(float));

    if (vetor == NULL) {
        printf("Erro na alocação de memória!\n");
        return NULL; 
    }

    return vetor;
}

void questao03(void){
	int TAM, i;
	float media, soma=0;
	float *vetor;

	printf("Digite o tamanho do vetor: ");
	scanf("%d", &TAM);

	// Alocando dinamicamente apenas o espaco necessario 
	vetor = alocaVetorFloat(TAM);

	for(i=0; i<TAM; i++){
		printf("Digite o elemento da posicao %d: ", i);
		scanf("%f", &vetor[i]);
		soma += vetor[i];
	}

	media = soma/TAM;

	printf("\nA media aritmetica dos elementos do vetor: %.2f\n", media);

	// Libera o espaço reservado dinamicamente
	free(vetor);
}

/*
	[M] Questão 04) 
	Faça uma função que leia um vetor de números reais de
	tamanho escolhido pelo usuário e descubra qual é o maior elemento do
	vetor, junto com seu índice.
	Essa função deve receber um endereço onde o maior valor será guardado e
	deve retornar o índice onde foi encontrado.
	Assuma que esse vetor nunca possa estar vazio!
*/


void questao04(){

	int TAM, i;
	float media, soma=0;
	float maior=0;
	int indiceMaior=-1;

	float *vetor;

	printf("Digite o tamanho do vetor: ");
	scanf("%d", &TAM);

	vetor = alocaVetorFloat(TAM);

	for(i=0; i<TAM; i++){
		printf("Digite o elemento da posicao %d: ", i);
		scanf("%f", &vetor[i]);

		if(vetor[i]>maior){
			maior = vetor[i];
			indiceMaior = i;
		}	
	}

	printf("\nMaior elemento do vetor: %.2f\n", maior);
	printf("Indice do maior elemento: %d\n", indiceMaior);

	// Libera o espaço reservado dinamicamente
	free(vetor);
}

/*
	[M] Questão 05) 
	Implemente uma função que receba uma matriz de dimensões
	quaisquer N x M e retorne a soma dos elementos dessa matriz. Assuma que
	essa matriz seja alocada dinamicamente.

*/

int **alocaMatriz (int linhas, int colunas){
	int **matriz;
	int i;

	// Aloca um vetor de ponteiros para as linhas
	matriz = (int**)malloc(linhas*sizeof(int*));

	if(matriz == NULL){
		printf("Erro na alocao de memoria!\n");
		return NULL;
	}

	// Aloca um vetor para cada linha
	for(i=0; i<linhas; i++){
		matriz[i] = (int *)malloc(colunas * sizeof(int));

		if (matriz[i] == NULL) {
			printf("Erro na alocação de memória!\n");

			// Libera a memória alocada anteriormente
			for (int j = 0; j < i; j++) {
				free(matriz[j]);
			}
			free(matriz);
			return NULL; 
		}
	}

	return matriz;
}

void desalocaMatriz(int **matriz, int linhas) {
    int i;

    for (i=0; i<linhas; i++) {
        free(matriz[i]);
    }

    free(matriz);
}


void questao05(void){

	int linhas, colunas;
	int i,j;
	int **matriz;
	int somaMatriz = 0;

	printf("Digite o numero de linhas da matriz: ");
	scanf("%d", &linhas);
	printf("Digite o numero de colunas da matriz: ");
	scanf("%d", &colunas);

	matriz = alocaMatriz(linhas, colunas);

	printf("Digite os elementos da matriz:\n");
    for (i=0; i<linhas; i++) {
        for (j=0; j<colunas; j++) {
            scanf("%d", &matriz[i][j]);
            somaMatriz += matriz[i][j];
        }
    }

 	// Libera a memória alocada para a matriz
    desalocaMatriz(matriz, linhas);

	printf("\nSoma dos elementos da matriz: %d\n", somaMatriz);

}

/*
	[M] Questão 06) 
	Faça um programa que leia a quantidade de um total de X
	produtos que uma empresa tem em suas Y lojas e imprimir em formato de
	tabela:
	• O total de cada produto nessas lojas
	• A loja que tem menos produtos.

*/


void questao06(void){

	int i, j;
	int somaLojas;
	int loja_menosProd = -1;
	int indice_loja_menos_prod;
	int linhas, colunas;
	int **estoque;  //  guarda o estoque da empresa

	// linha = produtos
	// coluna = lojas

	printf("Digite a variedade de produtos: ");
	scanf("%d", &linhas);
	printf("Digite a qtd de lojas: ");
	scanf("%d", &colunas);

	estoque = alocaMatriz(linhas, colunas);

	// preenche a matriz
	printf("Digite a quantidade de produtos em cada loja: ");
	for(i=0; i<linhas ; i++){
		for(j=0; j<colunas; j++){
			scanf("%d", &estoque[i][j]);
		}
	}


	printf("\n");
	for(j=0; j<colunas; j++){
		printf("\tL%d", j+1);
	}

	printf("\n");


	for(i=0; i<linhas ; i++){
		printf("P%d\t", i+1);

		for(j=0; j<colunas; j++){
			printf("%d\t", estoque[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	// soma as colunas da matriz
    for (j = 0; j < colunas; j++) {
        somaLojas = 0; // Inicializa a soma para cada nova coluna

        for (i = 0; i < linhas; i++) {
            somaLojas += estoque[i][j];
        }

        printf("Total de produtos na loja %d: %d\n", j + 1, somaLojas);

        if (somaLojas < loja_menosProd) {
            loja_menosProd = somaLojas;
            indice_loja_menos_prod = j;
        }
    }
	printf("\nLoja que possui menos produtos: L%d\n", indice_loja_menos_prod+1);

 	// Libera a memória alocada para a matriz
    desalocaMatriz(estoque, linhas);

}


int main(int argc, char ** argv){
	int opcao;
	int linhas, colunas; 	// questao 2
	
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
			questao02(linhas, colunas);
		}

		else if(opcao == 3){	
			printf("\nExecutando Questao 03...\n");		
			questao03();
		}


		else if(opcao == 4){
			printf("\nExecutando Questao 04...\n");
			questao04();
		}
		else if(opcao == 5){
			printf("\nExecutando Questao 04...\n");
			questao05();
		}
		else if(opcao == 6){
			printf("\nExecutando Questao 04...\n");
			questao06();
		}		
		else if(opcao == 0){
			printf("\nFinalizando a execucao do programa.\nAte mais...\n");
			break;	
		}
	}

	return SUCESSO;
}	