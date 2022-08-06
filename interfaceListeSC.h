#ifndef __INTERFACELISTESC_H__
#define __INTERFACELISTESC_H__

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define TAILLEMAX  15     
#define NIL -1

typedef int curseur; 

typedef struct Student
{
  char matricule[8];
  char nom[25];
  char postnom[25];
} Student;


typedef struct cellule{
  Student val;
  curseur idSuiv;
} Cellule;

typedef struct listSC{
  int taille;
  Cellule tab[TAILLEMAX];
  curseur premier;
  curseur cle;
  curseur prLibre;
} listSC ;


/* IMPLEMENTATION DES PRIMITIVES PAR TABLEAU STATIQUE */

int last(listSC L);

void debutListe(listSC *L);

void suivant(listSC *L);

int listeVide(listSC *L);

Cellule valeur(listSC *L);

curseur getCleListe(listSC *L);

void setCleListe(listSC *L, curseur p);

curseur prendreCellule(listSC *L);

void rendreCelluleA(listSC *L, curseur p );

void insereEnTete(listSC *L, Student c);

void insereApres(listSC *L, Student c);

int listePleine(listSC *L);

void supprimeEnTete(listSC *L);

void supprimeApres(listSC *L);

void creerListe(listSC *L);

/*                                                    FIN DES PRIMITIVES                   */

#endif
