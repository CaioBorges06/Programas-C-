#include<stdio.h>

struct computacao{
	char titulo[30];
	int registronumerico;
};
struct romance{
	char titulo[30];
	int registronumerico;
};
struct computacao livroum = {"Java como programar",30};
struct romance livrodois = {"Helena",30};
main()
{
	printf("Livros: \n");
	printf("computacao: \n");
	printf("Titulo: %s \n",livroum.titulo);
		printf("Registro: %d \n",livroum.registronumerico);
		printf("\n");
		printf("Romance: \n");
	printf("Romance: \n");
	printf("Titulo: %s \n",livrodois.titulo);
		printf("Registro: %d \n",livrodois.registronumerico);
        system("PAUSE");
	
}
