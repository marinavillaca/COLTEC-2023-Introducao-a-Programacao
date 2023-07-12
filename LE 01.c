/*
* UFMG - Universidade Federal de Minas Gerais
* COLTEC- Colégio Técnico
* PROF. Leandro Maia Silva
* Disciplina: Introdução a Programação 
* Ano: 2023
* 
*
*		Lista de Exercícios 01

	Faça um arquivo .c para cada questão. A solução fornecida
	usa está em um único arquivo pois ela contém o assunto “Funções”. Caso
	você já saiba como utilizá-las, ignore e faça conforme solicitado.
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
    printf("(4) Questao 04\n");
    printf("(5) Questao 05\n");
    printf("(6) Questao 06\n"); 
    printf("(7) Questao 07\n");
    printf("(8) Questao 08\n");                   
    printf("(0) Sair\n");   

}

/*
	Questão 01) 
	Faça o fluxograma e um programa que leia o numerador e
	o denominador de uma fração e imprima ambos seguido do resultado.
	Considere que todos os números são de ponto flutuante.
*/

void questao01(){

	float numerador, denominador;
    float razao;

    // Obtem os valores do usuário
	printf("Digite um numerador: ");
	scanf("%f", &numerador);
	printf("Digite um denominador: ");	
	scanf("%f", &denominador);

    // Calcula e imprime o resultado
    razao = numerador/denominador;

	printf("O resultado da razao entre %f e %f eh %f\n", numerador, denominador, razao);
	
}	


/*
	Questão 02) 
	Faça o fluxograma e um programa que leia cinco valores
	inteiros, calcule e imprima a soma deles.
*/

void questao02(){

		int num1, num2, num3, num4, num5;
		int soma;

		// Leitura dos valores digitados pelo usuário
		printf("Digite o primeiro valores (inteiro): ");
		scanf("%d",&num1);
		printf("Digite o segundo valores (inteiro): ");		
		scanf("%d",&num2);
		printf("Digite o terceiro valores (inteiro): ");		
		scanf("%d",&num3);
		printf("Digite o quarto valores (inteiro): ");		
		scanf("%d",&num4);
		printf("Digite o quinto valores (inteiro): ");		
		scanf("%d",&num5);

	    // Calcula a soma e mostra o resultado
		soma = num1+num2+num3+num4+num5;
		
		printf("A soma dos valores %d+%d+%d+%d+%d eh: %d\n",num1,num2,num3,num4,num5, soma);
}

/*
	Questão 03) 
	Faça o fluxograma e um programa para ler seis valores
	reais, calcular e imprimir a média aritmética deles.

*/

void questao03(){

		float num1, num2, num3, num4, num5, num6;
        float media;

        // Leitura dos valores digitados pelo usuário
		printf("Digite 6 valores reais: ");
		scanf("%f",&num1);
		scanf("%f",&num2);
		scanf("%f",&num3);
		scanf("%f",&num4);
		scanf("%f",&num5);
		scanf("%f",&num6);
		
   	    // Calcula a média e mostra o resultado
		media = (num1+num2+num3+num4+num5+num6)/6;
		
		printf("A media aritmetica dos valores (%.1f, %.1f, %.1f, %.1f, %.1f, %.1f) eh: %.2f\n",num1,num2,num3,num4,num5,num6, media);

}

/*
	Questão 04) 
	Faça o fluxograma e um programa para calcular e imprimir
	o valor de H, sendo H = 1/1 + 1/2 + 1/3 + 1/4 + 1/5

*/

void questao04(){
	float H;
	
    // Calcula o valor de H
	H = (1/1) + (1/2) + (1/3) + (1/4) + (1/5);

	printf("O valor de H eh: %.4f\n", H);
}

/*

	Questão 05) 
	Faça o fluxograma e um programa que calcule o novo
	salário de um funcionário. Você deverá obter o salário atual e o
	percentual de aumento que será dado ao funcionário.

*/

void questao05(){

	float salario_atual;
	float aumento;
	float salario_novo;

	// Obtem os dados
	printf("Ola! Digite seu salario atual (em reais): ");
	scanf("%f", &salario_atual);
	printf("\nDigite seu percentual de aumento: ");
	scanf("%f", &aumento);
	
	// Calcula o aumento, novo salario e imprime o valores
	salario_novo = salario_atual*(1+(aumento/100)) ;
	
	printf("\nSeu novo salario eh: %.2f reais", salario_novo);

}

/*
	Questão 06) 
	Faça um programa que leia o numerador e o denominador
	de uma fração e imprima ambos seguido do resultado, sendo todos com três
	casas decimais. Considere que todos os números são de ponto flutuante.
*/

void questao06(){

	float numerador, denominador;
	float razao;
	
    // Obtem os valores do usuário
	printf("Digite um numerador: ");
	scanf("%f", &numerador);
	printf("Digite um denominador: ");
	scanf ("%f", &denominador);
	
    // Calcula e imprime o resultado
	razao = numerador/denominador;

	printf("\nO resultado da divisao entre %.3f e %.3f eh: %.3f ", numerador, denominador, razao);

}

/*
	Questão 07) 
	Faça um programa que leia as notas de três provas de
	três alunos e imprime em forma de tabela (um aluno por linha, uma nota
	por coluna) os valores lidos.
	Todas as notas devem ter duas casas decimais e elas devem ser separadas
	por uma tabulação.

*/

void questao07(){

	float aluno1_nota1, aluno1_nota2, aluno1_nota3;
	float aluno2_nota1, aluno2_nota2, aluno2_nota3; 
	float aluno3_nota1, aluno3_nota2, aluno3_nota3; 

	// Obtem as notas dos alunos
	printf("Digite as tres notas do ALUNO 1: ");
	scanf("%f", &aluno1_nota1);
	scanf("%f", &aluno1_nota2);
	scanf("%f", &aluno1_nota3);
	
	printf("Digite as tres notas do ALUNO 2: ");
	scanf("%f", &aluno2_nota1);
	scanf("%f", &aluno2_nota2);
	scanf("%f", &aluno2_nota3);

	printf("Digite as tres notas do ALUNO 3: ");	
	scanf("%f", &aluno3_nota1);
	scanf("%f", &aluno3_nota2);
	scanf("%f", &aluno3_nota3);

	// Imprime as notas em forma de tabela
	printf("\n\tNota 1\tNota 2\tNota 3");
	printf("\nAluno 1\t %.2f\t %.2f\t %.2f", aluno1_nota1, aluno1_nota2, aluno1_nota3);
	printf("\nAluno 2\t %.2f\t %.2f\t %.2f", aluno2_nota1, aluno2_nota2, aluno2_nota3);
	printf("\nAluno 3\t %.2f\t %.2f\t %.2f", aluno3_nota1, aluno3_nota2, aluno3_nota3);

}


/*
	Questão 08) 
	Faça um programa que leia, nesta ordem, a idade (valor
	inteiro) de uma pessoa e o sexo (caractere) e em seguida imprima os
	valores lidos.
*/

void questao08(){

	int idade;
	char sexo;

	// Obtem os dados do usuário
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Digite seu sexo [F = feminino ou M = masculino]: ");
	scanf(" %c", &sexo);
	
	// Imprime os valores lidos
	printf("\nIdade: %d anos\nSexo: %c\n", idade, sexo);
}

int main(int argc, char ** argv){
	int opcao;

	while(1){

		menu();
		printf("=> Digite a opcao que deseja: ");
		scanf("%d", &opcao);
        getchar(); 					

		if(opcao == 1){
			questao01();
		}
		if(opcao == 2){
			questao02();
		}
		if(opcao == 3){
			questao03();
		}
		if(opcao == 4){
			questao04();
		}
		if(opcao == 5){
			questao05();
		}
		if(opcao == 6){
			questao06();
		}
		if(opcao == 7){
			questao07();
		}
		if(opcao == 8){
			questao08();
		}							
		else if(opcao == 0){
			break;
		}

	}

	return SUCESSO;
}	