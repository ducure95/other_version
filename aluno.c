#include "aluno.h"

struct al
{
  char nome[20];
  long int cpf;
  int num_mat;
  char curso[20];
  char data_ing[11];
};

Al* cria_al(char nome[], long int cpf, int num_mat, char curso[], char data_ing[])
{
  Al* aux = (Al*)malloc(sizeof(Al));
  strcpy(aux->nome, nome);
  aux->cpf = cpf;
  aux->num_mat = num_mat;
  strcpy(aux->curso, curso);
  strcpy(aux->data_ing, data_ing);
  return aux;
}


void deletar_al(Al *al)
{
  free(al);
}


char* get_nome(Al* al)
{
  return al->nome;
}


char* get_curso(Al* al)
{
  return al->curso;
}


char* get_data_in(Al* al)
{
  return al->data_ing;
}


long int get_cpf(Al* al)
{
  return al->cpf;
}


int get_numMat(Al* al)
{
  return al->num_mat;
}


void set_nome(Al* al, char nome[])
{
  strcpy(al->nome, nome);
}


void set_curso(Al* al, char curso[])
{
  strcpy(al->curso, curso);
}


void set_data_in(Al* al, char data_ing[])
{
  strcpy(al->data_ing, data_ing);
}


void set_cpf(Al* al, long int cpf)
{
  al->cpf = cpf;
}


void set_numMat(Al* al, int num_mat)
{
  al->num_mat = num_mat;
}


void printer(Al* al)
{
  printf("nome %s\n cpf: %ld\n curso: %s\n Data de Ing: %s\n Matricula: %d", al->nome, al->cpf, al->curso, al->data_ing, al->num_mat);
}
