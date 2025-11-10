#include<stdio.h>//Biblioteca padrão para entrada e saída
#include<stdlib.h>
//programa principal main()
int main(){
	//declaração de variavéis:
	int num1, num2; // variavéis para entrada de dados
	int result_soma; // variável para saida de dados
	
	/* o comando scanf() é pra receber um dado escrito pelo usuário
	%d - formatação em inteiro; & - operador de endereço */
	printf("informe um numero inteiro: ");
	scanf("%d",&num1);
	printf("informe um outro numero inteiro: ");
	scanf("%d",&num2);
	
	//realizar a operação da soma
	/* simbolo "=" significa receber ou atribuição
	simbolo "+" operador soma */
	result_soma = num1 + num2;
	
	// \n é pra pular linha
	printf("Resultado da soma = %d\n ",result_soma);
	system("pause");
	return 0;
}
