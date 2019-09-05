#include "disciplina.h"

struct ds
{
  char nome[20];
  int codigo;
  int carga_h;
  char curso[20];
  int sala;
};

Ds* cria_Ds(char nome[], int codigo, int sala, char curso[], int carga_h);


void deletar_Ds(Ds *ds)
{
  free(ds);
}

char* get_nome(Ds* ds)
{
  return ds->nome;
}


char* get_curso(Ds* ds)
{
  return ds->curso;
}


int get_sala(Ds* ds)
{
  return ds->sala;
}


int get_codigo(Ds* ds)
{
  return ds->codigo;
}


int get_carga(Ds* ds)
{
  return ds->carga_h;
}






void set_nome(Ds* ds, char nome[])
{
  strcpy(ds->nome, nome);
}

char* set_curso(Ds* ds, char curso[])
{
  strcpy(ds->curso, curso);
}

int set_sala(Ds* ds, int sala)
{
  ds->sala = sala;
}


int set_codigo(Ds* ds, int codigo)
{
  ds->codigo = codigo;
}


int set_carga(Ds* ds, int carga_h)
{
  ds->carga_h = carga_h;
}

Ds* get_disc(Ds **ds, int index)
{
  return ds[index];
}


void printer_ds(Ds* ds)
{
  printf("Disciplina: %s\nCurso: %s\nSala: %d\nCodigo: %d\n Carga Horaria: %d", ds->nome, ds->curso, ds->sala, ds->codigo, ds->carga_h);
}
