#include<stdio.h>

int main ()
{
	float soma();
	
	float numeroum, numerodois;
	
	printf("Informe o primeiro valor: ");
	scanf("%f", &numeroum);
	printf("Informe o segundo valor: ");
	scanf("%f", &numerodois);
	
	printf("Resultado final: %2.2f \n", soma(numeroum, numerodois));
	system("PAUSE");
}

    float soma (valorum,valordois)
    float valorum, valordois;
    {
    	return valorum + valordois;
	}
