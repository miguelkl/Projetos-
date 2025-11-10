/*este programa é pra calcular o imc*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	
	float peso,altura; //entrada dados 
	float imc; //saida dados
	
	//operadores de calculo: +, / , - ,*.
	printf("informe o seu peso  (kg): ");
	scanf("%f",&peso);
	printf("informe o sua altura (m):  ");
	scanf("%f",&altura);
	
	imc = peso /(altura * altura);
	
	printf("Resultado seu imc = %.2f\n", imc);
	
	system("pause");
	return 0;	
}
