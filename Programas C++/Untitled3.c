#include<stdio.h>

int main ()
{
	float celeta, sala,hr,toma,media,inss;
	
	printf("Digite o salario do funcionario: ");
		scanf("%f",&sala);
	printf("Digite quantas horas o funcionario trabalhou: ");
		scanf("%f",&hr);
		
	media = sala/160;
		
	   if (hr <= 160)
	   toma = sala;
	   else
	   if (hr > 160)
	   toma = media * (hr - 160)  + sala;
	   
	   printf("Seu salario, sem desconto, e de: %2.2f reais \n",toma);
	   
	    if (toma < 1212)
	   inss = toma * 0.075;
	   else
	   if (toma >= 1212 && toma < 2427.35)
	   inss = toma * 0.09;
	   else
	   if (toma >= 2427.35 && toma < 3641.03)
	   inss = toma * 0.12;
	   else
	   if (toma >= 3641.03 && toma <  7087.22)
	   inss = toma * 0.14;
	   
	   celeta = toma - inss;
	   
	   printf("Seu salario, apos o desconto do inss e de: %2.2f reais \n",celeta);
	   printf("foram descontados %2.2f reais \n",inss);
	   return 0;
	
	   system("PAUSE");
}
