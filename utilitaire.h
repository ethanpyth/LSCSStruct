#ifndef __UTILITAIRE_H__
#define __UTILITAIRE_H__

#include "interfaceListeSC.h"

enum{
    AJOUTER = 1,
    SUPPRIMER,
    AFFICHER,
    TRIER
};

int is_inlist(listSC L, char X);
void showList(listSC *L);
listSC transStrToLSC(char *s);
listSC *suppOcc(char *s, char *c);
void choicesList();
void choice(int *);
void addStudent(char *, char *, char *, listSC *);
int deleteStudent(char *, listSC *);
void triList(listSC *, int);

#endif
