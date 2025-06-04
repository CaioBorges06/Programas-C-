#include<stdio.h>

int main()
{
	float salario, impostoderenda;
	printf("Digitar o salario do individuo: ");
	scanf("%f",&salario);
	
	if (salario < 1500)
	printf("Insento de impostos");
	else
	if (salario >= 1500 && salario < 2500)
	impostoderenda = (salario *0.075);
	else
	if (salario >= 2500 && salario < 4000)
	impostoderenda = (salario *0.15);
	else 
	if (salario >= 4000 && salario < 7000)
	impostoderenda = (salario *0.225);
	else 
	if (salario >= 7000)
	impostoderenda = (salario *0.275);
	
	printf("Impostos a pagar: %2.2f reais" ,impostoderenda);
	return 0;
	
}
