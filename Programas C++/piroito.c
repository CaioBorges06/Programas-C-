#include<stdio.h>
int main()
{
	int contador = 1; // (inicio do contador) valendo 1 inicialmente
	while (contador <= 10000) { // equanto o que estiver dentro do parenteses(teste) for verdadeiro, continuara rodando
		printf ("Valor gerado %d \n",contador);
		contador = contador + 1; //incremento
}
	
	printf("valor final ao terminar %d \n",contador);
	system("PAUSE");
}
