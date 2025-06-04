#include<stdio.h>

int main ()
{
	
//int soma();
int numeroum , numerodois;
printf("Informe o primeiro valor: ");
scanf("%d", &numeroum);
printf("Informe o segundo valor: ");
scanf("%d",&numerodois);
printf("Resultado final: %d \n", soma(numeroum, numerodois));
system("PAUSE");
}

int soma (int valorum, int valordois)

{
	return valorum + valordois;
}
