#include "atestado.h"

struct at
{
  Al* al;
  Ds** ds;
  int q_horas;
};


At* cria_at(Al* al, Ds** ds, int q_horas)
{
  At* aux = (At*)malloc(sizeof(At));
  aux->al = al;
  aux->ds = ds;
  aux->q_horas = q_horas;
  return aux;
}


void deletar(At* at);

Al* get_aluno(At* at)
{
  return at->al;
}

int get_hora(At* at)
{
  return at->q_horas;
}

void set_al(At *at, Al* al)
{
  at->al = al;
}
void set_disc(At* at, Ds* ds, int index)
{
  at->ds[index] = ds;
}
void set_qhoras(At* at, int horas)
{
  at->q_horas = horas;
}

void printer_at(At* at)
{
  printer(at->al);
  printf("\n\n");

  for(int i=0; i < at->q_horas; i+=4)
  {
    printer_ds(get_disc(At->ds, i/4));
  }
}
