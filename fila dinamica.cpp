//Este programa mostra a implementação da fila na alocação dinamica
#include<stdio.h>
#include<stdlib.h>//usar para comando system("pause")
#include<locale.h>
struct Nodo {
	int info;
	struct Nodo *prox;
};
typedef struct Nodo celula;
//temos dois ponteiros para Fila: variaveis globais
celula *ifila = NULL; //no inicio da fila
celula *ffila = NULL; //no final da fila

int FilaVazia (void);//verificar se fila está vazia
void insereFinal(int x);
void removeInicio(void);
void mostraFila(void);
void menu(void);
void devolverFila(void);//coleta de lixo
//programa principal
int main (){
	
	system("pause");
	return 0;
}
int filaVazia(){
	if (ifila == NULL){
		return 1;//verdadiro
	}
	else{
	 return 0;//falso
    }
}
void insereFinal(int x){
	celula *ptr, *aux;
	ptr = (celula *)malloc(sizeof(celula));
	ptr->info = x;
	ptr->prox = NULL;
	if (filaVazia()){
		ifila = ptr;
		ffila = ptr;
	}
	else {
		ffila->prox = ptr;
		ffila = ptr;//ou ffila = ifila->prox;
	} 
	ptr = NULL;
}
void removeInicio(void){
	celula *aux;
	
	aux = ifila;
	ifila = ifila->prox; //andar uma celula pra frente
	aux->prox = NULL; //desconectar da fila
	free(aux); //levar esta celula para memória RAM
	aux = NULL;
}

