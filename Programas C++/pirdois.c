#include<stdio.h>

int main()
{
	float soma (); //a função deve ser declarada
	printf("Soma dos valores \n");
	printf("Resultado final: %2.2f \n", soma(10.2,8.4));
	printf("Resultado final: %2.2f \n", soma (3.0,4.0));
	system("PAUSE");
}

     float soma (valorum,valordois) //indicar o tipo da função
     float valorum;
     float valordois;
     {
     	return valorum + valordois;
	 }
     
