#include<stdio.h>

struct aluno{
	
	char nome[30];
	int idade;
	
};

struct professor{
	
	char nome[30];
	int idade;
	
};

struct aluno alunoum = {"Anderson",30};
struct aluno alunodois = {"Jaqueline",19};
struct professor professorum = {"Marcelo  Storion",30};
struct professor professordois = {"Ricardo",19};

main()
{
	
	printf("Nome: %s \n",alunoum.nome);
	printf("Nome: %d \n",alunoum.idade);
	printf("Nome: %s \n",alunodois.nome);
	printf("Nome: %d \n",alunodois.idade);
	
	
	printf("Nome: %s \n",professorum.nome);
		printf("Nome: %d \n",professorum.idade);
			printf("Nome: %s \n",professordois.nome);
				printf("Nome: %d \n",professordois.idade);
				system("PAUSE");



}
