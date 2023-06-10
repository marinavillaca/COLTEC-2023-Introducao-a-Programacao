/*

						Lista de Exercícios 07

		Instruções: Faça um arquivo .c para a lista inteira. As soluções deverão
		estar em um único arquivo e deverá existir um Menu com as opções para
		escolher qual exercício executar. O usuário deverá ficar no Menu até que
		escolha sair.
		Para cada questão chamada, implemente uma rotina de testes.
		
		[F] Questão 01) Faça um programa que leia uma string e conte quantos
		espaços em branco ela possui.
		
		[F] Questão 02) Faça um programa que leia um string e que a imprima
		removendo todos os espaços em branco existentes.
		
		[F] Questão 03) Faça um programa que leia uma string e conte o número
		de vogais presentes nela.
		
		[M] Questão 04) Faça um programa que leia uma string de mais de uma
		palavra e que faça com que cada palavra da string lida seja começada com
		uma letra maiúscula.
		Atenção porque a letra pode já ser maiúscula.
		
		[M] Questão 05) Faça um programa que leia uma palavra e determine se ela
		é um palíndromo.
		Uma palavra é dita ser um palíndromo se a sequência de caracteres da
		esquerda para direita é a mesma da direita para esquerda.
		Exemplo: asa, arara.
		
		[D] Questão 06) Faça um progrma que leia uma string e determine se ela
		é um palíndromo.
		Um palíndromo, além de uma palavra (como no exercício anterior), pode
		ser uma frase que tenha a propriedade de possuir a mesma sequência da
		direita para esquerda quando da esquerda pra direita, excluindo os
		separadores, hifens, virgulas e etc.
		Exemplos: Socorram-me, subi no onibus em Marrocos
		Anotaram a data da maratona
		Dammit, I'm mad!

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
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

void questao01(){
	char str[TAM_MAX];
	int i = 0;
	int count = 0;

	printf("Digite uma string (frase): ");
	fgets(str, TAM_MAX, stdin);

	for(i=0; i<TAM_MAX; i++){

		if(str[i] == ' ')
			count++;

		else if(str[i] == '\n')
			break;
	}
	printf("Quantidade de espacos em branco: %d\n", count);
}


void questao02(){
	char str[TAM_MAX];
	int i, j;
	char result[TAM_MAX];

	printf("Digite uma string (frase): ");
	fgets(str, TAM_MAX, stdin);

	for(i=0, j=0; i<TAM_MAX; i++){

		if(str[i] != ' '){
			result[j] = str[i];
			j++;
		}
	}

	printf("String c/ espacos removidos (se houver): %s", result);
}


void questao03(){
	char str[TAM_MAX];
	int i;
	int count = 0;

	printf("Digite uma string (frase): ");
	fgets(str, TAM_MAX, stdin);

	for(i=0; str[i] != '\0'; i++){
		if(str[i]== 'a' || str[i]== 'e' || str[i]== 'i' || str[i]== 'o' || str[i]== 'u')
			count++;
	}

	printf("Quantidade de vogais na string: %d\n", count);
}


	void questao04(){
		char str[TAM_MAX];
		int i;

		printf("Digite uam string (frase): ");
		fgets(str, TAM_MAX, stdin);

		str[0] = toupper(str[0]);


		for(i=1; str[i] != '\0'; i++){

			if(! isupper(str[i]) && str[i-1]== ' ')
				str[i] = toupper(str[i]);
		}

    printf("String em que cada palavra comeca em maiuscula: %s", str);
	}


void questao05(){

	char str[TAM_MAX];
	int i=0, j=0;
	int flag = 1;

	printf("Digite uma palavra p/ verificar se eh um palindromo: ");
	fgets (str, TAM_MAX, stdin);

	// Subtraímos 2 para remover o caractere '\n' e '\0'
    j = strlen(str) - 2;  

	for(i=0; i<j; i++, j--){
		if (str[i] != str[j]){
			flag = 0;
			break;
		}				
	}

	if(flag == 0)
		printf("Nao eh um palindromo.\n\n", str);
	

	else 
		printf("Eh um palindromo.\n\n", str);
}



void questao06(){
char frase[TAM_MAX];
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Remover caracteres especiais e espaços
    int i, j = 0;
    char limpa[TAM_MAX];
    for (i = 0; frase[i] != '\0'; i++) {
        if ((frase[i] >= 'a' && frase[i] <= 'z') || (frase[i] >= 'A' && frase[i] <= 'Z')) {
            limpa[j] = tolower(frase[i]);
            j++;
        }
    }
    limpa[j] = '\0';

    // Verificar se é palíndromo
    int inicio = 0;
    int fim = j - 1;
    int palindromo = 1;

    while (inicio < fim) {
        if (limpa[inicio] != limpa[fim]) {
            palindromo = 0;
            break;
        }
        inicio++;
        fim--;
    }

    if (palindromo)
        printf("A frase eh um palindromo.\n\n");
    else
        printf("A frase nao eh um palindromo.\n\n");
}	

int main(int argc, char ** argv){
	int opcao;
	
	while(1){

		menu();
		printf("=> Digite a opcao que deseja: ");
		scanf("%d", &opcao);
        getchar(); // Limpar o buffer de entrada
		

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

		else if(opcao == 0){
			printf("\nFinalizando a execucao do programa.\nAte mais...\n");
			break;	
		}

	}


	return SUCESSO;
}	