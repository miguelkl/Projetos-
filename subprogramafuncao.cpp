/*Este programa é para mostrar um subprograma que 
funciona como uma função ( que retorna um valor ) */
#include<stdio.h>//biblioteca padrão para entrada e saida
int get_idade(); //declaração de subprograma 
//programa principal
int main (){
	printf("A sua idade: %d anos",get_idade());
	return 0;
}
/*subprograma funciona como um valor
  int é um tipo de dado a ser retornado pelo subprograma*/
int get_idade (){
	int idade;
	printf("Informe a sua idade: idade = ");
	scanf("%d",&idade);
	return idade; //retornar o valor idade
}
