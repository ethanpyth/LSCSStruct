#include "utilitaire.h"
#include "interfaceListeSC.h"

// NOM  : KAWEJ A MBAY Excellence
// MATRICULE : 19KA201

void main(){
    listSC list;
    Student student;
    int choice;
    char matricule[8], nom[25], postnom[25];
    int repeat;
    creerListe(&list);
    do
    {
        choicesList();
        printf("\n------------------------------------\n");
        printf("Votre choix : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case AJOUTER:
                printf("Matricule : ");
                scanf("%s", matricule);
                printf("Nom : ");
                scanf("%s", nom);
                printf("Postnom : ");
                scanf("%s", postnom);
                addStudent(matricule, nom, postnom, &list);
                break;
            
            case SUPPRIMER:
                printf("Entrer le nom de l'etudiant : ");
                scanf("%s", nom);
                deleteStudent(nom, &list);
                break;
            
            case AFFICHER:
                showList(&list);
                break;
            
            case TRIER:
                
                break;

            default:
                break;
        }
    } while (choice != 0);
}
