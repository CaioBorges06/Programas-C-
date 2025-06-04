#include<stdio.h>
int main()
{
void soma ();
int numeroum,numerodois;
printf("Informe o primeiro valor: ");
scanf("%d",&numeroum);
printf("Infore o segundo valor: ");
scanf("%d",&numerodois);
soma(numeroum,numerodois);
system("PAUSE");
}
void soma(int valorum, int valordois)
{
	int resultado;
	resultado = valorum + valordois;
	printf("Dado final %d \n", resultado);
	printf("O dado nao retorna ao chamador \n") ;
}


