#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int opcao;
	int num1, num2, resultado;
	float resul_div;

	printf("Menu para operação aritmética\n");
	printf("1 - somar. \n");
	printf("2 - subtrair. \n");
	printf("3 - multiplicar. \n");
	printf("4 - dividir. \n\n");
	
	printf("Informe o primeiro número inteiro para operação: n1 = ");
	scanf("%d",&num1);
	printf("Informe o segundo número inteiro para operação: n2 = ");
	scanf("%d",&num2);
	printf("Escolha sua opção: ");
	scanf("%d",&opcao);
	switch(opcao){
		case 1:
			resultado = num1 + num2;
			printf("O resultado da soma = %d\n",resultado);
			break;
		case 2:
			resultado = num1 - num2;
			printf("O resultado da subtração = %d\n",resultado);
			break;
		case 3:
			resultado = num1 * num2;
			printf("O resultado da multiplicação = %d\n",resultado);
			break;
		case 4:
			resul_div = (float) num1 / num2;
			printf("O resultado da divisão = %f\n",resul_div);
			break;
		default:
			printf("você digitou uma opção inválida!\n");
	}//fim switch
	system("pause");
	return 0;
}
