#include<stdio.h>

int main()

{
	
	char nome[100];
	printf("Entre com seu nome completo: \n");
	scanf ("%[^\n]",nome);
	printf("Seu nome completo: %s \n",nome);
	system("PAUSE");
	return 0;
	
}
