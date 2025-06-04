#include<stdio.h>

main()
{
	int numeroum;
	printf("Informe o primeiro valor \n");
	scanf("%d",&numeroum);
	printf("Endereco inicial %u \n",&numeroum);
	
	printf("Resultado final: %d \n", exibevalor(numeroum));
	system("PAUSE");
	
}

    exibevalor(int numeroum)
    {
    	printf("Endereco alterado, ou seja, uma nova variavel %u \n",&numeroum);
    	return numeroum;
	}
