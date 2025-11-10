/*Este programa é para mostrar um subprograma que 
funciona como um procedimento */
#include<stdio.h>//biblioteca padrão para entrada e saida
void mensagem(); //declaração de subprograma
//programa principal
int main(){
	mensagem(); //chamando subprograma mensagem()
	return 0;
}
//subprograma
void mensagem(){
	printf("Seja bem vindo/a da linguagem C avancada !!\n");
}
