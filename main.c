#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char titre[50];
    char description[30];
    char deadline[100];
    char statu[40];

 }Tache;
void ajouter(Tache *tache) {
    printf("entre le id: ");
    scanf(" %d", &tache->id);
    printf("entre le titre : ");
    scanf(" %s", tache->titre);
    printf("entre la description : ");
    scanf(" %s", tache->description);
    printf("entre la date limite (JJ/MM/AAAA) : ");
    scanf(" %s", tache->deadline);
    printf("entre le statut (realiser/en cours/finalisee): ");
    scanf(" %s", tache->statu);
    printf("Tache ajoutée avec succès .\n");
}
void modifierTache(Tache *listeTaches, int nombreTaches, int id) {
    for (int i = 0; i < nombreTaches; i++) {
        if (listeTaches[i].id == id) {
            printf("Modifier la tache %d :\n", id);
            printf("Nouveau titre : ");
            scanf(" %s", listeTaches[i].titre);
            printf("Nouvelle description : ");
            scanf(" %s", listeTaches[i].description);
            printf("Nouveau deadline  : ");
            scanf(" %s", listeTaches[i].deadline );
            printf("Tâche modifiée avec succès.\n");
            return;
        }
    }
    printf("Aucune tâche avec cet ID n'a été trouvée.\n");
}

int main() {
    Tache listeTaches[100];
    int choix, i;
    int nombreTaches = 0;
    do{
      printf("~~~~~~~~~~~~~~~~~~~~~~Menu~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("1: -----> Ajouter une nouvelle tache.\n");
        printf("2: -----> Afficher la liste de toutes les taches.\n");
        printf("3: -----> Modifier une tache\n");
        printf("4: -----> Supprimer une tache par identifiant.\n");
        printf("5: -----> Rechercher les Taches.\n");
        printf("6: -----> Statistiques.\n");
        printf("7: -----> Quitter.\n");
        printf("entre un choix : ");
        scanf("%d", &choix);

    switch(choix){

    case 1:
        printf("votre choix est 1\n");
                if (nombreTaches < 100) {
                    ajouter(&listeTaches[nombreTaches]);
                    nombreTaches++;
                }else {
                    printf("La liste de taches est pleine.\n");
                }
        break;

    case 2:

        printf("votre choix est 2\n");
                printf("Liste de toutes les taches :\n");
                for (i = 0; i < nombreTaches; i++) {
                    printf("-----> Tache %d :\n", i + 1);
                    printf("-----> ID : %d\n", listeTaches[i].id);
                    printf("-----> Titre : %s\n", listeTaches[i].titre);
                    printf("-----> Description : %s \n", listeTaches[i].description);
                    printf("-----> Date limite : %s \n", listeTaches[i].deadline);
                    printf("-----> Statu : %s \n", listeTaches[i].statu);
                }
        break;

     case 3:
         printf("Votre choix est 3\n");
         int Nouveauid;
         printf("entre id de la tache a modifier : ");
         scanf("%d", &Nouveauid);
         modifierTache(listeTaches, nombreTaches, Nouveauid);

        break;

      case 4:
                printf("Votre choix est 4\n");

        break;

      case 5:
                printf("Votre choix est 5\n");
        break;

      case 6:
                printf("Votre choix est 6\n");
        break;

      case 7:
                printf("ou revoir \n");
        break;

      default:
                printf("Choix incorrect.\n");
        }
    } while (choix != 7);


    return 0;

}




