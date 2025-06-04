#include<stdio.h>

int main()

{
	printf("Bom dia/tarde/noite, somos o serviço de assistencia tecnica CBV. \n");
	printf(" Trabalhamos com telas, conectores e baterias. \n");
	problema();
	
	
}

problema()
{
	float tela = 260;
	float conector = 180;
	float bateria = 200;
	float defeito;
	
	printf("Digite qual a parte do seu celular que esta com defeito: \n");
	scanf("%f",&defeito);
		if (defeito == tela)
	defeito = tela;
	if (defeito == conector)
	defeito = conector;
	if (defeito == bateria)
	defeito = bateria;

	printf("O custo do reparo, a vista, sera de: %2.2f reais. \n",defeito);
	

	
}
