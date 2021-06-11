#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

//Tamanho máximo da fila
#define MAX 5

//Estrutura dos dados que o usuário poderá inserir
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

//Variáveis globais
struct fila f;
char op;

//Função para inserir os dados
void inserir_dados(){
	//Verifica se a lista está cheia
	if (f.fim == MAX){ 
		printf("\nA lista de trabalhos está lotada!!\n");
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
		
		printf("\nDigite a Extensão do Arquivo: ");
		scanf(" %s", f.dado[f.fim].ext);
		fflush(stdin);
		
		printf("\nDigite a Matrícula do Professor Corretor: ");
		scanf(" %s", f.dado[f.fim].matricula);
		fflush(stdin);
		
		//Acrescenta +1 no fim da fila
		f.fim++;
	}
}

//Tirar o primeiro elemento da fila
void tirar_fila(){
	//Verifica se a fila está vazia
	if(f.ini == f.fim){ 
		printf("\nNão há mais trabalhos para corrigir, bom descanso !!\n");
		system("pause");
	}
	else {
		int i;
		
		system("cls");
		
		/*Como a posição 0 será sempre a posição inicial da fila, 
		já que a fila anda em direção ao início,
		ela é quem será apagada*/
		printf("***************Os seguintes dados serão Apagados*************** \n");
		printf("* RA: %s\n", f.dado[0].RA);
		printf("* Nome do Arquivo: %s\n", f.dado[0].nome_arq);
		printf("* Extensão do Arquivo: %s\n", f.dado[0].ext);
		printf("* Matrícula do Professor Corretor: %s\n", f.dado[0].matricula);
		printf( "*************************************************************** \n");
		system("pause");
		
		//Desloca os elementos da fila em direção ao início
		for(i=0; i < f.fim; i++){ 
			//O dado atual, recebe o dado posterior
			f.dado[i]= f.dado[i+1];
		}
		//Decrescenta o fim da fila
		f.fim--;
	}
}

//Função para excluir todos os dados já inseridos
void apagar_fila(){
	int i;
	//Verfica se a fila está vazia
	if(f.ini == f.fim){
		printf("\nA fila já está vazia, não há necessidade de excluí-la!\n");
		system("pause");
	}
	else {
		//Função que "zera" os dados na Estrutura "dados"
		memset(&f.dado, 0, sizeof f.dado);
		//Rebobina a fila para o início
		f.fim = 0; 
		printf("\nFila limpa!\n");
		system("pause");
	}
}


//Função para mostrar toda fila de dados já inseridos
void mostrar_fila() {
	int i;
	
	system("cls");
	
	for(i = 0; i < f.fim; i++){
		printf("***************************Integrante número %d da fila*************************** \n", i+1);
		printf("* RA: %s\n", f.dado[i].RA);
		printf("* Nome do Arquivo: %s\n", f.dado[i].nome_arq);
		printf("* Extensão do Arquivo: %s\n", f.dado[i].ext);
		printf("* Matrícula do Professor Corretor: %s\n", f.dado[i].matricula);
		printf("********************************************************************************* \n");
	}
	
}

//Função de Menu
void mostrar_menu() {
	
	printf("\n\n##################################################");
	printf("\n# Escolha uma dentre as opções abaixo:           #");
	printf("\n# 	1 - Adicionar um novo Elemento à fila.   #");
	printf("\n# 	2 - Excluir o Primeiro Elemento da fila. #");
	printf("\n# 	3 - Apagar Todos os dados da fila.       #");
	printf("\n# 	0 - Sair e encerrar                      #\n");
	printf("##################################################\n");

}

//Função principal
int main () {
	//Função de linguagens, ela coloca a possibilidade de mais caracteres portugueses
	setlocale(LC_ALL, "Portuguese");
	op = '1';
	//Inicia as variáveis de posições da fila
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
			printf("\nOpção Inválida!\n");
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
