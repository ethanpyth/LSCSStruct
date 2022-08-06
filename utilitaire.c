#include "interfaceListeSC.h"
#include "utilitaire.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define TAILLEMAX  15 

void showList(listSC *L){
    debutListe(L);
    printf("\n------------------------------------\n");
    printf("| Matricule\t | Nom\t | Postnom |\n");
    printf("------------------------------------\n");
    while(getCleListe(L) != NIL){
        printf("| %s\t | %s\t | %s |\n", valeur(L).val.matricule, valeur(L).val.nom, valeur(L).val.postnom);
        suivant(L);
        printf("------------------------------------------\n");
    }
    printf("\n");
}

void choicesList(){
    printf("\n------------------------------------\n");
    printf("0) Quitter le programme\n");
    printf("1) Ajouter un etudiant\n");
    printf("2) Supprimer un etudiant\n");
    printf("3) Afficher la liste des étudiants\n");
    printf("4) Trier la liste\n");
    printf("\n------------------------------------\n");
}

int deleteStudent(char *nom, listSC *L){
    for (int i = 0; i < TAILLEMAX; i++)
    {
        if (L->tab->val.nom == nom)
        {
            setCleListe(L, L->cle - 1);
            supprimeApres(L);
        }
    }  
}

void triList(listSC * L, int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i - 1; i++)
        {
            if (&L->tab[j] > &L->tab[j + 1])
            {
                curseur p = L->cle - 1;
                setCleListe(L, p);
                insereApres(L, L->tab[j + 1].val);
            }
        }
    }
}

void addStudent(char *matricule, char *nom, char *postnom, listSC *L){
    static Student student;
    strcpy(student.matricule, matricule);
    strcpy(student.nom, nom);
    strcpy(student.postnom, postnom);
    insereEnTete(L, student);
}
