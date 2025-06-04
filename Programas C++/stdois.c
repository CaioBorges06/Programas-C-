struct pessoa{
	
	char nome[30];
	int idade;
	
};

struct classificapessoas{
	
	struct pessoa aluno;
	struct pessoa professor;
	
};

struct classificapessoas pessoaum = {{"Anderson",50},{"Marcelo",20}};

main()

{
	
	printf("Pessoa: \n");
	printf("aluno: \n");
	printf("Nome: %s \n",pessoaum.aluno.nome);
		printf("Idade: %d \n",pessoaum.aluno.idade);
		
			printf("\n");
				printf("Professor: \n");
					printf("Nome: %s \n",pessoaum.professor.nome);
						printf("Idade: %d \n",pessoaum.aluno.idade);
						system("PAUSE");





	
	
}

