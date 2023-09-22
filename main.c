#include <stdio.h>
#include <string.h>
#include <time.h>
struct Tache {
    int id;
    char titre[200];
    char description[300];
    char deadline[30];
    char statu[20];

 };
void ajouter(){
    struct Tache nevelltach;
    printf("entre une titre:");
    scanf("%s",nevelltach.titre);
    printf("entre une description:");
    scanf("%s",nevelltach.description);
    printf("entre la date limite de la tache (JJ/MM/AAAA):");
    scanf("%s",nevelltach.deadline);
    printf("entre une statu(realiser,en cours de realisation,finalisee):");
    scanf("%s",nevelltach.statu);
    printf("Tache ajoutée avec succes\n");


}

int main() {
    struct Tache listeTaches[100];
    int choix;
    do{
    printf("Menu\n");
    printf("1: Ajouter une nouvelle tache.  \n");
    printf("2: Ajouter plusieurs nouvelles taches.\n");
    printf("3: Afficher la liste de toutes les taches. \n");
    printf("4: Modifier une tache \n");
    printf("5: Supprimer une tache par identifiant.\n");
    printf("6: Rechercher les Taches.\n");
    printf("7: Statistiques.\n");
    printf("entre un choix:\n");
    scanf("%d",&choix);

    switch(choix){

    case 1:
        printf("votre choix et 1\n");
    ajouter();
        break;
    case 2:
        printf("votre choix et 2\n");

        break;
    case 3:
        printf("votre choix et 3\n");

        break;
    case 4:
        printf("votre choix et 4\n");

        break;
    default:
        printf("votre choix inccorect");

    }
    }while(choix!=4);
    return 0;
}




void menu (){
    printf("Menu\n");
    printf("1: Ajouter une nouvelle tache.  \n");
    printf("2: Ajouter plusieurs nouvelles taches.\n");
    printf("3: Afficher la liste de toutes les taches. \n");
    printf("4: Modifier une tache \n");
    printf("5: Supprimer une tache par identifiant.\n");
    printf("6: Rechercher les Taches.\n");
    printf("7: Statistiques.\n");
    printf("entre un choix:\n");
}
