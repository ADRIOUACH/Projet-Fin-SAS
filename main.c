#include <stdio.h>
#include <string.h>
#include <time.h>
struct Tache {
    char id[100];
    char titre[100];
    char description[100];
    char deadline[100];
    char statu[100];

 };
void ajouter(){
    struct Tache nevelltach;
    printf("entre une id:\n");
    scanf("%s",nevelltach.id);
    printf("entre une titre:\n");
    scanf("%s",nevelltach.titre);
    printf("entre une description:\n");
    scanf("%s",nevelltach.description);
    printf("entre la date limite de la tache (JJ/MM/AAAA):\n");
    scanf("%s",nevelltach.deadline);
    printf("entre une statu(realiser,en cours de realisation,finalisee):\n");
    scanf("%s",nevelltach.statu);
    printf("Tache ajoutée avec succes\n");


}


int main() {
    struct Tache listeTaches[100];
    int choix;
    int nombreTaches = 0;
    do{
    printf("~~~~~~~~~~~~~~~~~~~~~~Menu~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("1: Ajouter une nouvelle tache.\n");
    printf("2: Afficher la liste de toutes les taches.\n");
    printf("3: Modifier une tache\n");
    printf("4: Supprimer une tache par identifiant.\n");
    printf("5: Rechercher les Taches.\n");
    printf("6: Statistiques.\n");
    printf("entre un choix:\n");
    scanf("%d",&choix);

    switch(choix){

    case 1:
         printf("votre choix est 1\n");
                if (nombreTaches < 100) {
                    ajouter(&listeTaches[nombreTaches]);
                    nombreTaches++;
                } else {
                    printf("La liste de taches est pleine.\n");
                }
        break;
    case 2:
        pprintf("votre choix est 2\n");
                printf("Liste de toutes les taches :\n");
                for (int i = 0; i < nombreTaches; i++) {
                    printf("Tache %d :\n", i + 1);
                    printf("ID : %s\n", listeTaches[i].id);
                    printf("Titre : %s\n", listeTaches[i].titre);
                    printf("Description : %s\n", listeTaches[i].description);
                    printf("Date limite : %s\n", listeTaches[i].deadline);
                    printf("Statu : %d\n", listeTaches[i].statu);

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

    }while(choix!=7);

    return 0;
}




