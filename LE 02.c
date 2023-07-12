/*
* UFMG - Universidade Federal de Minas Gerais
* COLTEC- Colégio Técnico
* PROF. Leandro Maia Silva
* Disciplina: Introdução a Programação 
* Ano: 2023
* 
*
		Lista de Exercícios 02

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
    printf("(0) Sair\n");   

}

/*
	Questão 01) 
	Faça o fluxograma e um programa que leia dois números
	inteiros e determine qual deles é o maior (não o maior valor) ou se são
	iguais.
*/

void questao01(){
		int num1;
		int num2;

		printf("Digite o valor 1: ");
		scanf("%d", &num1);
		printf("Digite o valor 2: ");
		scanf("%d", &num2);

		if(num1>num2)
			printf("Maior valor: %d.\n", num1);
		
		else if(num2>num1)
			printf("Maior valor: %d\n", num2);
		
		else 
			printf("Valores iguais\n");

}

/*
	Questão 02) 
	Faça o fluxograma e um programa que leia três
	comprimentos (x, y e z) e responda se eles formam um triângulo, ou seja,
	se x < y + z e y < x + z e z < x + y.

*/

void questao02(){

		int medida1;
		int medida2;
		int medida3;

		printf("Digite medida 1: ");
		scanf("%d", &medida1);
		printf("Digite medida 2: ");
		scanf("%d", &medida2);		
		printf("Digite medida 3: ");
		scanf("%d", &medida3);

		if((medida1 < medida2 + medida3) && (medida2 < medida1 + medida3) && (medida3 < medida1 + medida2))
			printf("Forma um triangulo!\n");		
		else 
			printf("Nao forma um triangulo!\n");

}

/*
	Questão 03) 
	Faça um programa para ler o número do dia da semana e
	imprimir seu respectivo nome por extenso. Considere o número 1 como
	domingo, 2 como segunda e etc. Caso o dia da semana seja inválido, exibir
	a mensagem “Dia da Semana invalido”.

*/


void questao03(){

		int dia_da_semana;
		
		printf("Digite um dia da semana: ");
		scanf("%d", &dia_da_semana);

		if(dia_da_semana==1)
			printf("Dia da semana: Domingo");	

		else if(dia_da_semana==2)
			printf("Dia da semana: Segunda-feira");	

		else if(dia_da_semana==3)
			printf("Dia da semana: Terca-feira");	

		else if(dia_da_semana==4)
			printf("Dia da semana: Quarta-feira");

		else if(dia_da_semana==5)
			printf("Dia da semana: Quinta-feira");

		else if(dia_da_semana==6)
			printf("Dia da semana: Sexta-feira");

		else if(dia_da_semana==7) 
			printf("Dia da semana: Sabado");

		else
			printf("Dia da Semana Invalido");
}

/*
	Questão 04) 
	Faça o fluxograma e um programa que leia dois números
	inteiros e uma das operações (soma, subtração, multiplicação, divisão,
	potência e radiciação) e imprima a operação com o resultado.

*/

void questao04(){

		int num1;
		int num2;
		char operacao;
		int resultado;

		printf("Digite o numero 1: ");
		scanf("%d", &num1);
		printf("Digite o numero 2: ");
		scanf("%d", &num2);		
		printf("Digite a operacao que deseja SOMA(+), SUBT(-), MULT(*), DIV(/), POT(^), RAD(sqrt): ");
		scanf(" %c", &operacao);	


		if(operacao == '+'){
			resultado = num1+num2;
			printf("\nResultado (SOMA): %d", resultado);	
		}
		else if(operacao == '-'){
			resultado = num1-num2;
			printf("\nResultado (SUBTRACAO): %d", resultado);	
		}	
		else if(operacao == '*'){
			resultado = num1*num2;
			printf("\nResultado (MULTIPLICACAO): %d", resultado);	
		}
		else if(operacao == '/'){
			resultado = num1/num2;
			printf("\nResultado (DIVISAO): %d", resultado);							
		}	
	
		else if(operacao == '^'){
			resultado = pow(num1,num2);
			printf("\nResultado (POTENCIA): %d", resultado);
		}

		else{
			printf("\nResultado (RADICIACAO): %f %f", sqrt(num1), sqrt(num2));
		}

}

/*
	Questão 05) 
	Faça um programa que leia as notas de três provas de
	três alunos e imprime em forma de tabela (um aluno por linha, uma nota
	por coluna) os valores lidos além do conceito dele.
	Todas as notas devem ter duas casas decimais e elas devem ser separadas
	por uma tabulação.
	Conceitos: A[90:100] ; B[80:90[ ; C[70:80[ ; D[60:70[ ; R[0:60[
*/

void questao05(){

	float nota1_a1, nota2_a1, nota3_a1;
	float nota1_a2, nota2_a2, nota3_a2;
	float nota1_a3, nota2_a3, nota3_a3;
	char conc_a1, conc_a2, conc_a3;
	float media_a1, media_a2, media_a3;

	printf("Digite as tres notas do ALUNO 1: ");
	scanf("%f %f %f", &nota1_a1, &nota2_a1, &nota3_a1);
	printf("Digite as tres notas do ALUNO 2: ");
	scanf("%f %f %f", &nota1_a2, &nota2_a2, &nota3_a2);
	printf("Digite as tres notas do ALUNO 3: ");
	scanf("%f %f %f", &nota1_a3, &nota2_a3, &nota3_a3);

	media_a1 = (nota1_a1+nota2_a1+nota3_a1)/3;
	media_a2 = (nota1_a2+nota2_a2+nota3_a2)/3;
	media_a3 = (nota1_a3+nota2_a3+nota3_a3)/3;


	{
	if(media_a1>=90 && media_a1<=100)
	conc_a1 = 'A';
	else if(media_a1>=80 && media_a1<90)
	conc_a1 = 'B';
	else if(media_a1>=70 && media_a1<80)
	conc_a1 = 'C';
	else if(media_a1>=60 && media_a1<70)
	conc_a1 = 'D';
	else
	conc_a1 = 'R';
	}


	{
	if(media_a2>=90 && media_a2<=100)
	conc_a2 = 'A';
	else if(media_a2>=80 && media_a2<90)
	conc_a2 = 'B';
	else if(media_a2>=70 && media_a2<80)
	conc_a2 = 'C';
	else if(media_a2>=60 && media_a2<70)
	conc_a2 = 'D';
	else
	conc_a2 = 'R';
	}


	{
	if(media_a3>=90 && media_a3<=100)
	conc_a3 = 'A';
	else if(media_a3>=80 && media_a3<90)
	conc_a3 = 'B';
	else if(media_a3>=70 && media_a3<80)
	conc_a3 = 'C';
	else if(media_a3>=60 && media_a3<70)
	conc_a3 = 'D';
	else
	conc_a3 = 'R';
	}

	printf("\t Nota 1\tNota 2\tNota3\tConceito \n");
	printf("Aluno 1\t %.2f \t%.2f \t%.2f\t%c\n", nota1_a1, nota2_a1, nota3_a1, conc_a1);
	printf("Aluno 2\t %.2f \t%.2f \t%.2f\t%c\n", nota1_a2, nota2_a2, nota3_a2, conc_a2);
	printf("Aluno 3\t %.2f \t%.2f \t%.2f\t%c\n", nota1_a3, nota2_a3, nota3_a3, conc_a3);
}

/*
	Questão 06) 
	Faça um programa que leia, nesta ordem, a altura (em
	metros) e o sexo (caractere) e em seguida imprima o peso ideal dela.
	Homens: (72,7 x altura) - 58
	Mulheres: (62,1 x altura) – 44,7
*/

void questao06(){

		float altura;
		char sexo;
		float PI;

		printf("Digite sua altura: ");
		scanf("%f", &altura);
		printf("Digite seu sexo (f == Feminino ou m == masculino): ");
		scanf(" %c", &sexo);	

		if(sexo=='m'){
			PI = (72.7*altura) - 58;
			printf("\nSeu peso ideal: %f", PI);
		}
		else{
			PI = (62.1*altura) - 44.7;
			printf("\nSeu peso ideal: %f", PI);
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

		else if(opcao == 4){	
			printf("\nExecutando Questao 03...\n");		
			questao04();
		}

		else if(opcao == 5){	
			printf("\nExecutando Questao 03...\n");		
			questao05();
		}

		else if(opcao == 6){	
			printf("\nExecutando Questao 03...\n");		
			questao06();
		}
			
		else if(opcao == 0){
			printf("\nFinalizando a execucao do programa.\nAte mais...\n");
			break;	
		}
	}

	return SUCESSO;
}	