/* Este Programa é para mostrar como criar célula em C */
#include<stdio.h>
#include<string.h>
//Definindo uma célula usando struct
struct Aluno{
	//char nome[50];
	char *nome; //um ponteiro para string
	int idade;
	float nota;
};
typedef struct Aluno alunos; //definir struct Aluno como "alunos
int main(){
	alunos aluno1;
	alunos *ptr;
	aluno1.idade = 25;
	aluno1.nota = 8.6;
	//Criar uma copia com nome "Julianna..." e atribuir para aluno1.nome
	//strcpy(aluno1.nome,"Juliana Dantas Alves");
	aluno1.nome = "Julianna Dantas Alves";	
	ptr = &aluno1; //ptr recebeu endereço da célula aluno1
	printf("Dados mostrados da celula:\n");
	printf("Nome : %s\n",aluno1.nome);
	printf("Idade : %d\n",aluno1.idade);
	printf("Nota : %.2f\n",aluno1.nota);
	printf("Dados mostrados da celula usando ponteiro ptr:\n");
	printf("Nome : %s\n",ptr->nome);
	printf("Idade : %d\n",ptr->idade);
	printf("Nota : %.2f\n",ptr->nota);
	return 0;
}
