#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

//Tamanho m�ximo da fila
#define MAX 5

//Estrutura dos dados que o usu�rio poder� inserir
struct dados {
	char RA[30];
	char matricula[30];
	char nome_arq[50];
	char ext[10];
};

//Estrutura da fila
struct fila {
	int ini;
	int fim;
	struct dados dado[MAX];
};

//Vari�veis globais
struct fila f;
char op;

//Fun��o para inserir os dados
void inserir_dados(){
	//Verifica se a lista est� cheia
	if (f.fim == MAX){ 
		printf("\nA lista de trabalhos est� lotada!!\n");
		system("pause");
	}
	else {
		system("cls");
		
		printf("\nDigite o RA do Aluno: ");
		scanf(" %s", f.dado[f.fim].RA);
		fflush(stdin);
		
		printf("\nDigite o Nome do Arquivo: ");
		scanf(" %s", f.dado[f.fim].nome_arq);
		fflush(stdin);
		
		printf("\nDigite a Extens�o do Arquivo: ");
		scanf(" %s", f.dado[f.fim].ext);
		fflush(stdin);
		
		printf("\nDigite a Matr�cula do Professor Corretor: ");
		scanf(" %s", f.dado[f.fim].matricula);
		fflush(stdin);
		
		//Acrescenta +1 no fim da fila
		f.fim++;
	}
}

//Tirar o primeiro elemento da fila
void tirar_fila(){
	//Verifica se a fila est� vazia
	if(f.ini == f.fim){ 
		printf("\nN�o h� mais trabalhos para corrigir, bom descanso !!\n");
		system("pause");
	}
	else {
		int i;
		
		system("cls");
		
		/*Como a posi��o 0 ser� sempre a posi��o inicial da fila, 
		j� que a fila anda em dire��o ao in�cio,
		ela � quem ser� apagada*/
		printf("***************Os seguintes dados ser�o Apagados*************** \n");
		printf("* RA: %s\n", f.dado[0].RA);
		printf("* Nome do Arquivo: %s\n", f.dado[0].nome_arq);
		printf("* Extens�o do Arquivo: %s\n", f.dado[0].ext);
		printf("* Matr�cula do Professor Corretor: %s\n", f.dado[0].matricula);
		printf( "*************************************************************** \n");
		system("pause");
		
		//Desloca os elementos da fila em dire��o ao in�cio
		for(i=0; i < f.fim; i++){ 
			//O dado atual, recebe o dado posterior
			f.dado[i]= f.dado[i+1];
		}
		//Decrescenta o fim da fila
		f.fim--;
	}
}

//Fun��o para excluir todos os dados j� inseridos
void apagar_fila(){
	int i;
	//Verfica se a fila est� vazia
	if(f.ini == f.fim){
		printf("\nA fila j� est� vazia, n�o h� necessidade de exclu�-la!\n");
		system("pause");
	}
	else {
		//Fun��o que "zera" os dados na Estrutura "dados"
		memset(&f.dado, 0, sizeof f.dado);
		//Rebobina a fila para o in�cio
		f.fim = 0; 
		printf("\nFila limpa!\n");
		system("pause");
	}
}


//Fun��o para mostrar toda fila de dados j� inseridos
void mostrar_fila() {
	int i;
	
	system("cls");
	
	for(i = 0; i < f.fim; i++){
		printf("***************************Integrante n�mero %d da fila*************************** \n", i+1);
		printf("* RA: %s\n", f.dado[i].RA);
		printf("* Nome do Arquivo: %s\n", f.dado[i].nome_arq);
		printf("* Extens�o do Arquivo: %s\n", f.dado[i].ext);
		printf("* Matr�cula do Professor Corretor: %s\n", f.dado[i].matricula);
		printf("********************************************************************************* \n");
	}
	
}

//Fun��o de Menu
void mostrar_menu() {
	
	printf("\n\n##################################################");
	printf("\n# Escolha uma dentre as op��es abaixo:           #");
	printf("\n# 	1 - Adicionar um novo Elemento � fila.   #");
	printf("\n# 	2 - Excluir o Primeiro Elemento da fila. #");
	printf("\n# 	3 - Apagar Todos os dados da fila.       #");
	printf("\n# 	0 - Sair e encerrar                      #\n");
	printf("##################################################\n");

}

//Fun��o principal
int main () {
	//Fun��o de linguagens, ela coloca a possibilidade de mais caracteres portugueses
	setlocale(LC_ALL, "Portuguese");
	op = '1';
	//Inicia as vari�veis de posi��es da fila
	f.ini = 0;
	f.fim = 0;
	//Loop de menu
	while (op!='0'){
		mostrar_fila();
		mostrar_menu();
		printf("Sua escolha: ");
		scanf(" %s", &op);
		fflush(stdin);
		
		if (op != '1' && op != '2' && op != '3' && op != '0'){
			printf("\nOp��o Inv�lida!\n");
			system("pause");
		} else {
		
			switch(op){
				case '1' :
					inserir_dados();
				break;
				case '2' :
					tirar_fila();
				break;
				case '3' :
					apagar_fila();
				break;
				case '0' :
					op = '0';
				break;
			}
		}
	}
	
	return (0);
}
