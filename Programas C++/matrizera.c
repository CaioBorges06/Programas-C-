#include<stdio.h>

#define li 5
int m[li] = {0,6,8,5,7};
int nmr;

int main()

{
	
	int soma = 0;
	printf("Digite um valor: \n");
	scanf("%d",&nmr);
	soma = nmr + m[3];
	printf("Valor final: %d",soma);
	system("PAUSE");
	return 0;
}
