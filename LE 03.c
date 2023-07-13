/*
* UFMG - Universidade Federal de Minas Gerais
* COLTEC- Colégio Técnico
* PROF. Leandro Maia Silva
* Disciplina: Introdução a Programação 
* Ano: 2023
* 
*
		Lista de Exercícios 03

	Instruções: Faça um arquivo .c para cada questão. A solução fornecida
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
    printf("(9) Questao 09\n");
    printf("(10)Questao 10\n");                       
    printf("(0) Sair\n");   

}

/*
	Questão 01) 
	Faça o fluxograma e um programa que imprime os números
	impares de 0 a 100. Atenção! Não é para fazer um laço que conta de 2 em
	2, é para passar por todos os valores mas só imprimir os impares.
*/

void questao01(){

	for(int i=0; i<=100 ; i++){
		if(i%2 != 0){
			printf("%d\n", i);
		}
	}
}

/*
	Questão 02) 
	Faça um programa que leia números inteiros e retorne a
	multiplicação de todos eles. O programa deve encerrar a multiplicação
	quando o usuário digitar o valor 0.

*/

void questao02(){

		int num, produto=1;

		printf("Multiplicacao entre os numeros\n");
		while(1){
			printf("Digite um numero inteiro (digite 0 para encerrar): ");
			scanf("%d", &num);	
			
			if(num==0){
				break;
			}
	
			produto = produto*num;
		}

		printf("\nO produto entre os numeros eh: %d\n", produto);

}

/*
	Questão 03) 
	Faça o fluxograma e um programa que calcule e imprima a
	tabuada de um número NUM fornecido pelo usuário.

*/


void questao03(){

		int num;

		printf("Digite um numero inteiro: ");
		scanf("%d", &num);

		printf("-------------------------------\n");
		printf("\n\tTABUADA DO NUMERO %d:\n\n", num);

		for(int i=0; i<=10; i++){
			printf("\t%d x %d = %d\n", num, i, num*i);
		}
		printf("\n-------------------------------\n");

}

/*
	Questão 04) 
	Faça um programa que calcule N! (fatorial de N), sendo
	que o valor de N é fornecido pelo usuário.

*/

int fatorial(int n){
	int fat=1;

		for(int i=1; i<=n; i++)
			fat = fat*i;
	
	return fat; 
}

void questao04(){

	int num;

	printf("Digite um valor (N): ");
	scanf("%d", &num);
		
	printf("Fatorial de %d: %d\n", num, fatorial(num));

}

/*
	Questão 05) 
	Faça um programa que calcule e imprima a tabuada de 1 a 10.
*/

void questao05(){

		int num;

		printf("-------------------------------\n");
		printf("\n    >> TABUADA DE 1 A 10 <<\n\n");
		printf("-------------------------------\n");

		for(int i=1; i<=10; i++){
			printf("\n\t| TABUADA DO %d |\n\n", i);
			
			for(int j=0; j<=10; j++){
				printf("\t%d x %d = %d\n", i, j, i*j);
			}	

			printf("-------------------------------\n");
		}
}

/*
	Questão 06) 
	Faça um programa que imprima todos os divisores de um número inteiro fornecido pelo usuário.
*/

void questao06(){

		int num;
		int div;

		printf("Digite o numero inteiro: ");
		scanf("%d", &num);

		printf("Os divisores de %d sao: \n", num);
		
		for(int i=1; i<=num; i++){

			if(num%i == 0){
				printf("%d\n", i);
			}
		}
}

/*
	Questão 07) 
	Faça um programa que leia a nota final de N alunos e
	contabilize quantos alunos foram aprovados e quantos foram reprovados.
	Além disso, seu programa deverá imprimir o percentual de aprovação da
	turma.
	Para contar como aprovado, a nota deve ser igual ou superior à 60 pontos.
*/

void questao07(){

		int num_alunos;
		float nota_aluno;
		int cont = 0;
		float percentual_aprov;

		printf("Digite o numero de alunos: ");
		scanf("%d", &num_alunos);

		for(int i=1; i<=num_alunos; i++){

			printf("Digite a nota do aluno [%d]: ", i);
			scanf("%f", &nota_aluno);

			if(nota_aluno>=60){
				cont++;
			}
		}

		percentual_aprov = (float)cont/num_alunos*100;

		printf("\nNumero de alunos aprovados: %d\n", cont);
		printf("Percentual de aprovacao: %.2f%% \n", percentual_aprov);

}

/*
	Questão 08) 
	Escrever um programa que lê um valor N inteiro e positivo
	e que calcula e escreve o valor de E: E = 1 + 1/2! + 1/3! + ... + 1/N!

*/

void questao08(){

		unsigned int num;
		int fat = 1;
		float result = 0;

		printf("Digite um valor N inteiro e positivo: ");
		scanf("%u", &num);                                   // %u indica p/ ler um número inteiro não negativo. 

		for(int i=1; i<=num; i++){
			fat = fat*i;
			result = result + (float)1/fat;
		}
		
		printf("E = %f\n", result);

}

/*
	Questão 09) 
	Faça um programa que, dado um conjunto de valores
	inteiros e positivos (fornecidos um a um pelo usuário), determine qual
	o menor e o maior valor do conjunto. O final do conjunto de valores é
	conhecido através do valor zero, que não deve ser considerado.

*/

void questao09(){

		unsigned int num;
		int menor=99999, maior=1;

		do{
			printf("Digite um numero inteiro (digite 0 para encerrar): ");
			scanf("%u", &num);	
			
			if(num==0)
				break;
	
			if(num>maior)
				maior = num;

			else if(num<menor)
				menor = num;
		}

		while(num!=0);

		printf("O menor valor do conjunto: %d.\n", menor);
		printf("O maior valor do conjunto: %d.\n", maior);

}

/*
	Questão 10) 
	Fazer um programa para calcular e mostrar os N primeiros
	termos da série de Fibonacci. O número N é fornecido pelo usuário. A
	série de Fibonacci é : 1 1 2 3 5 8 13 ... Isto é f1 = f2 = 1, f3 = f1 +
	f2, f4 = f2 + f3

*/

int fibonacci(int n) {
    if (n == 0 || n == 1) 
        return n;
    
    else 
        return fibonacci(n-1) + fibonacci(n-2);   
}

void questao10(){

	int n, fib;
		
	printf("Digite um valor N: ");
	scanf("%d", &n);

	printf("O enesimo numero da sequencia de Fibonacci (%d): %d", n, fibonacci(n));

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

		else if(opcao == 5){	
			printf("\nExecutando Questao 05...\n");		
			questao05();
		}

		else if(opcao == 6){	
			printf("\nExecutando Questao 06...\n");		
			questao06();
		}

		else if(opcao == 7){	
			printf("\nExecutando Questao 07...\n");		
			questao07();
		}

		else if(opcao == 8){	
			printf("\nExecutando Questao 08...\n");		
			questao08();
		}

		else if(opcao == 9){	
			printf("\nExecutando Questao 09...\n");		
			questao09();
		}	

		else if(opcao == 10){	
			printf("\nExecutando Questao 10...\n");		
			questao10();
		}								
			
		else if(opcao == 0){
			printf("\nFinalizando a execucao do programa.\nAte mais...\n");
			break;	
		}
	}

	return SUCESSO;
}	