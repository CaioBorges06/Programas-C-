#include<stdio.h>

int main ()
{
	float inss, sala, hr;
	
	printf("Digite o seu salario: \n");
	scanf("%f",&sala);
	printf("Digite as horas trabalhadas: \n");
	scanf("%f",&hr);
	
	if (hr <= 160)
	sala = sala;
	
	else 
	if (hr > 160)
	sala = (sala/160)*hr;
	
	printf("Seu salario, sem desconto, e de: %2.2f reais \n",sala);
	
	if (sala < 1212)
	   inss = sala * 0.075;
	   else
	   if (sala >= 1212 && sala < 2427.35)
	   inss = sala * 0.09;
	   else
	   if (sala >= 2427.35 && sala < 3641.03)
	   inss = sala * 0.12;
	   else
	   if (sala >= 3641.03 && sala <  7087.22)
	   inss = sala * 0.14;
	   
	   sala = sala - inss;
	   
	   printf("Seu salario, com desconto, e de:  %2.2f reais \n", sala);
	   printf("Seu desconto foi de:  %2.2f reais ",inss);
	   system ("PAUSE");
	
}
