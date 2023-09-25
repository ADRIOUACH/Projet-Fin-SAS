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
    printf("Tache ajoutee avec succes .\n");

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
            printf("Tache modifiée avec succes.\n");

        }
    }
    printf("Aucune tache avec cet id n'a ete trouvee.\n");
}
void supprimerTache(Tache *listeTaches, int *nombreTaches, int id) {
    for (int i = 0; i < *nombreTaches; i++) {
        if (listeTaches[i].id == id) {
            for (int j = i; j < *nombreTaches - 1; j++) {
                listeTaches[j] = listeTaches[j + 1];
            }
            (*nombreTaches)--;
            printf("Tache avec id %d a ete supprimee avec succes.\n", id);

        }
    }
    printf("Aucune tache avec cet id n'a ete trouvee.\n");
}
void rechercherTacheParID(Tache *listeTaches, int nombreTaches, int id) {
    for (int i = 0; i < nombreTaches; i++) {
        if (listeTaches[i].id == id) {
            printf("Tache avec id %d :\n", id);
            printf("-----> Titre : %s\n", listeTaches[i].titre);
            printf("-----> Description : %s \n", listeTaches[i].description);
            printf("-----> Date limite : %s \n", listeTaches[i].deadline);
            printf("-----> Statut : %s \n", listeTaches[i].statu);

        }else{
            printf("Aucune tache avec cet ID n'a ete trouvee.\n");

        }
    }
}
void rechercherTacheParTitre(Tache *listeTaches, int nombreTaches, const char *titre) {
    for (int i = 0; i < nombreTaches; i++) {
        if (strcmp(listeTaches[i].titre, titre) == 0) {
            printf("Tache avec le Titre \"%s\" :\n", titre);
            printf("-----> ID : %d\n", listeTaches[i].id);
            printf("-----> Description : %s \n", listeTaches[i].description);
            printf("-----> Date limite : %s \n", listeTaches[i].deadline);
            printf("-----> Statut : %s \n", listeTaches[i].statu);

        }else{
            printf("Aucune tache avec ce Titre n'a ete trouvee.\n");

        }
    }
}
void afficherStatistiques(Tache *listeTaches, int nombreTaches) {
    int tachesCompletes = 0;
    int tachesIncompletes = 0;

    printf("Statistiques :\n");
    printf("Nombre total de taches : %d\n", nombreTaches);

    for (int i = 0; i < nombreTaches; i++) {
        if (strcmp(listeTaches[i].statu, "realiser") == 0) {
            tachesCompletes++;
        } else {
            tachesIncompletes++;
        }
    }

    printf("Nombre de taches completes : %d\n", tachesCompletes);
    printf("Nombre de taches incompletes : %d\n", tachesIncompletes);
}

int main() {
  char rechercheTitre[50];
    int rechercheID ;
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
                    printf(" Tache %d :\n", i + 1);
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
         int Supprimerid;
         printf("Entre id de la tache a supprimer : ");
         scanf("%d", &Supprimerid);
         supprimerTache(listeTaches, &nombreTaches, Supprimerid);

        break;

      case 5:
                printf("Votre choix est 5\n");
                int rechercheSousChoix;
                printf("1: Rechercher par ID\n");
                printf("2: Rechercher par Titre\n");
                printf("Entre un choix : ");
                scanf("%d", &rechercheSousChoix);

                switch (rechercheSousChoix) {
                    case 1:

                        printf("Entrez id de la tache : ");
                        scanf("%d", &rechercheID);
                        rechercherTacheParID(listeTaches, nombreTaches, rechercheID);
                        break;

                    case 2:

                        printf("Entrez le Titre de la tache : ");
                        scanf(" %s", rechercheTitre);
                        rechercherTacheParTitre(listeTaches, nombreTaches, rechercheTitre);
                        break;

                    default:
                        printf("Choix incorrect pour la recherche.\n");

                       }
                       break;

       case 6:

        printf("Votre choix est 6\n");
        afficherStatistiques(listeTaches, nombreTaches);

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




