#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main (){
	
	setlocale(LC_ALL,"portuguese");
	float sal_atual, sal_aumento, sal_liquido;
	float aumento, imposto; //variáveis auxiliares
	
	printf("informe seu salário atual R$");
	scanf("%f",&sal_atual);
	
	if (sal_atual <= 3000.0){
		aumento = (15.45/100) * sal_atual;
		sal_aumento = sal_atual + aumento;
	}
	else {
		   if (sal_atual <= 5500.0){
		   	 aumento = (10.15/100) * sal_atual;
		     sal_aumento = sal_atual + aumento;
		   }
		   else {
		   	 aumento = (7.5/100) * sal_atual;
		     sal_aumento = sal_atual + aumento;
		   }
	}
	
	printf("Salário bruto com aumento R$ %.2f = R$ %.2f\n",aumento,sal_aumento);
	imposto = (20.5/100)*sal_aumento;
	sal_liquido = sal_aumento - imposto;
	printf("Salário liquido com imposto pago R$ %.2f = R$ %.2f\n",imposto,sal_liquido);
	
	system("pause");
	return 0;
}
