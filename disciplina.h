#ifndef DISCIPLINA_H
#define DISCIPLINA_H
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct ds Ds;

Ds* cria_Ds(char nome[], int codigo, int sala, char curso[], int carga_h);


void deletar_Ds(Ds *ds);

char* get_nome(Ds* ds);


char* get_curso(Ds* ds);


int get_sala(Ds* ds);


int get_codigo(Ds* ds);


int get_carga(Ds* ds);






void set_nome(Ds* ds, char nome[]);

char* set_curso(Ds* ds, char curso[]);

int set_sala(Ds* ds, int sala);


int set_codigo(Ds* ds, int codigo);


int set_carga(Ds* ds, int carga_h);

Ds* get_disc(Ds **ds, int index);

void printer_ds(Ds* ds);

#endif
