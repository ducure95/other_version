#ifndef ALUNO_H
#define ALUNO_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct al Al;

Al* cria_al(char nome[], long int cpf, int num_mat, char curso[], char data_ing[]);
void deletar_al(Al *al);
char* get_nome(Al* al);
char* get_curso(Al* al);
char* get_data_in(Al* al);
long int get_cpf(Al* al);
int get_numMat(Al* al);

void set_nome(Al* al, char nome[]);
void set_curso(Al* al, char curso[]);
void set_data_in(Al* al, char data_ing[]);
void set_cpf(Al* al, long int cpf);
void set_numMat(Al* al, int num_mat);

void printer(Al* al);



#endif
