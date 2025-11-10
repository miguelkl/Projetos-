#include<stdio.h>
#include<stdlib.h>
int main (){
	//declaração de variaveis
	float sal_atual, sal_aumento, aumento;
	
	printf("Informe seu salario atual R$");
	scanf("%f",&sal_atual); // entrada de dados
	//processamento
	aumento = (15.35/100)*sal_atual;
	sal_aumento = aumento + sal_atual; 
	//saida de dados
	printf("Seu salario com R$ %.2f de aumento = R$ %.2f\n", aumento,sal_aumento);
	
	system("pause");
	return 0;
}
