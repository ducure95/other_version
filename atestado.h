#ifndef ATESTADO_H
#define ATESTADO_H
#include "aluno.h"
#include "disciplina.h"

typedef struct at At;

At* cria_at(Al* al, Ds** ds, int q_horas);
void deletar(At* at);

Al* get_aluno(At* at);
int get_hora(At* at);

void set_al(At *at, Al* al);
void set_disc(At* at, Ds* ds, int index);
void set_qhoras(At* at, int horas);

void printer_at(At* at);
#endif
