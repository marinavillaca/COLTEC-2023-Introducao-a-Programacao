/*
* UFMG - Universidade Federal de Minas Gerais
* COLTEC- Colégio Técnico
* PROF. Leandro Maia Silva
* Disciplina: Introdução a Programação 
* Ano: 2023

					Lista de Exercícios 05

		Instruções: Faça um arquivo .c para a lista inteira. As soluções deverão
		estar em um único arquivo e deverá existir um Menu com as opções para
		escolher qual exercício executar. O usuário deverá ficar no Menu até que
		escolha sair.
		Para cada questão chamada, implemente uma rotina de testes.
		
		[F] Questão 01) Faça um programa que apresente o seguinte menu para o
		usuário:
		Escolha uma opção de calculo para dois numeros:
		1 – Soma
		2 – Produto
		3 – Quociente
		0 – Sair
		Opcao:
		O menu acima deve ser apresentado para o usuário enquanto ele não
		escolher a opção 0 (sair do programa). O usuário fornecerá 2 números se
		escolher as opções de cálculo 1, 2 ou 3. Para cada opção de cálculo deve
		existir (obrigatoriamente) uma função definida (soma, produto e
		quociente dos dois números fornecidos pelo usuário). O resultado do
		cálculo deve ser escrito na tela.
		
		[F] Questão 02) Faça uma função que receba a idade de uma pessoa em
		anos, meses e dias e retorna essa idade expressa em dias.
		Considere cada ano como 365 dias e cada mês como 30 dias.
		
		[M] Questão 03) Faça um procedimento que receba por parâmetro o tempo
		de duração de um experimento expresso em segundos e imprima na tela esse
		mesmo tempo em horas, minutos e segundos.
		
		[F] Questão 04) Implemente uma função que receba um número inteiro como
		entrada e verifique se esse número é primo ou não.
		
		[F] Questão 05) Faça uma função que receba um valor N inteiro e positivo
		e que calcula o fatorial deste valor.
		
		[M] Questão 06) Faça uma função que calcule um elemento do triângulo de
		Pascal. Utilize essa função para imprimir o triângulo com alturas variando de 0
		a 10.
		
		[M] Questão 07) Faça uma função que recebe três notas de um aluno e
		calcula sua média. Também faça uma função que verifica se um aluno foi
		aprovado.
		Faça um programa que leia três notas de N alunos e contabilize quantos
		alunos foram aprovados e quantos foram reprovados. Além disso, seu
		programa deverá imprimir o percentual de aprovação da turma.

		Para contar como aprovado, a nota deve ser igual ou superior à 60 pontos.
		
		[M] Questão 08) Fazer uma função para calcular o número de Fibonacci.
		Em seguida faça um programa para calcular e mostrar os N primeiros termos
		da série de Fibonacci. O número N é fornecido pelo usuário. A série de
		Fibonacci é : 1 1 2 3 5 8 13 ... Isto é f1 = f2 = 1, f3 = f1 + f2, f4 =
		f2 + f3

*/
#include <stdio.h>
#define SUCESSO 0

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

float soma(float num1, float num2){
	float s = 0;
	s = num1 + num2;

	return s;
}

float produto(float num1, float num2){
	float p = 0;
	p = num1*num2;

	return p;
}

float quociente(float num1, float num2){
	float q = 0;
	q = num1/num2;

	return q;
}

void questao_01(){
	int opcao;
	float num1, num2;

	while(1){
	printf("\nEscolha uma opcao de calculo para dois numeros: \n");
	printf("1 - Soma\n");
	printf("2 - Produto\n");
	printf("3 - Quociente\n");
	printf("0 - Sair\n");
	printf("Opcao: ");
	scanf("%d", &opcao);

	if(opcao==0){
		printf("Saindo...\n");
		break;
	}

	printf("Digite num1 e num2: ");
	scanf("%f", &num1);
	scanf("%f", &num2);

	if(opcao==1)
		printf("Operacao (1) - Soma: %.2f\n",soma(num1, num2));
	
	else if(opcao==2)
		printf("Operacao (2) - Produto: %.2f\n",produto(num1, num2));
	
	else if(opcao==3)
		printf("Operacao (3) - Quociente: %.2f\n",quociente(num1, num2));	
	}
}

void questao_02(){
	int idade_dias;
	int ano, mes, dias;

	printf("Digite sua idade em anos: ");
	scanf("%d", &ano);
	printf("Digite sua idade em meses: ");
	scanf("%d", &mes);
	printf("Digite sua idade em dias: ");
	scanf("%d", &dias);

	idade_dias = ano*365 + mes*30 + dias;
	printf("Sua idade em dias eh %d.\n", idade_dias); 
}

void questao_03(){
	int tempo;
	int horas = 0;
	int minutos = 0;
	int segundos = 0;

	printf("Digite o tempo do experimento em segundos: ");
	scanf("%d", &tempo);

	horas = tempo/3600;
	minutos = (tempo % 3600) / 60;
	segundos = (tempo % 3600) % 60;

	printf("%.1d seg = %.1d hora(s), %.1d minuto(s), %.1d segundo(s).\n", tempo, horas, minutos, segundos);
}

void questao_04(){
	int num;
	int count;

	printf("Digite um numero inteiro p/ verificar se eh primo : ");
	scanf("%d", &num);

	for(int i=1; i<=num; i++){
		if(num%i==0)
			count++;
	}

	if(count==2)
		printf("Numero %d: Eh primo.\n", num);
	else
		printf("Numero %d: Nao eh primo.\n", num);
}

void questao_05(){
	unsigned int num;
	int fat = 1;

	printf("Digite um numero inteiro positivo p/ calcular o Fatorial: ");
	scanf("%d", &num);

	for(int i=1; i<=num; i++)
		fat = fat*i;	

	printf("Fatorial de %d: %d.\n", num, fat);
}

// triangulo de pascal
void questao_06(){

}

#define TAM_MAX 10000

void questao_07(){
	float nota1, nota2, nota3;
	float media[TAM_MAX];
	int num_alunos, aprovados=0, reprovados=0;
	float perc;
	int i=0;

	printf("Digite a quantidade de alunos: ");
	scanf("%d", &num_alunos);

	for(i=1; i<=num_alunos; i++){
		printf("Digite a nota 1, nota 2 e a nota 3 do aluno [%d]: ", i);
		scanf("%f", &nota1);
		scanf("%f", &nota2);
		scanf("%f", &nota3);

	media[i] = (nota1 + nota2 + nota3)/3;

	if(media[i] >= 60)
		aprovados++;
	}

	reprovados = num_alunos - aprovados;
	perc = (float)aprovados/num_alunos*100;

	for(i=1; i<=num_alunos; i++){

		if (media[i] >= 60 )
			printf ("Aluno[%d]: Aprovado\n", i);

		else 
			printf ("Aluno[%d]: Reprovado\n", i);
	}

	printf("\nTotal de alunos aprovados: %d\n", aprovados); 
	printf("Total de alunos reprovados: %d\n", reprovados); 
	printf("Percentual de aprovacao: %.2f%%\n", perc);
}

int fibo(int N){
	if(N==1 || N==2)
		return 1;
	
	else
		return fibo(N-1) + fibo(N-2);  // recursao	
}

void questao_08(){
		int n;
		printf("Digite um N de Fibonacci: ");
		scanf("%d", &n);		
		printf("Fibonacci de %d eh %d\n", n, fibo(n));
}


int main(int argc, char ** argv){
		
		while(1) {
		menu();
		int opcao;	
		scanf("%d", &opcao);

		if (opcao==1){
		    printf("\nExecutando Questao 01...\n");
			questao_01();
		}
		else if (opcao==2){
    		printf("\nExecutando Questao 02...\n");
			questao_02();
		}
		else if (opcao==3){
    		printf("\nExecutando Questao 03...\n");			
			questao_03();			
		}
		else if (opcao==4){
    		printf("\nExecutando Questao 04...\n");			
			questao_04();			
		}
		else if (opcao==5){
    		printf("\nExecutando Questao 05...\n");			
			questao_05();
		}
		else if (opcao==6){
    		printf("\nExecutando Questao 06...\n");			
			questao_06();			
		}
		else if (opcao==7){
    		printf("\nExecutando Questao 07...\n");			
			questao_07();			
		}
		else if (opcao==8){
    		printf("\nExecutando Questao 08...\n");			
			questao_08();			
		}
		else if (opcao==0){
			printf("\nFinalizando a execucao do programa.\nAte mais...\n");
			break;			
		}	

	}
		return SUCESSO;
	}