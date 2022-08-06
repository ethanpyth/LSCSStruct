#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define T 100

typedef struct Student{
    char matricule[8];
    char nom[25];
    char postNom[25];
} Student;

typedef struct objet {
    Student v;
    int suivant;
} Objet;

typedef struct LSC {
    Objet tab[T];
    int premierLibre;
    int tete;
    int cle;
} LSC;
