//
// Created by abdou on 5/25/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include "tri/Tri.h"
#include "utils/Utils.h"

int main() {
    int choix, ordre;
    bool croissant;

    int n = lireTailleTableau();


    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        fprintf(stderr, "Erreur d'allocation memoire\n");
        return 1;
    }


    lireTableau(arr, n);

    do {
        printf("\nMenu Programme:\n");
        printf("1. Tri par selection\n");
        printf("2. Tri par insertion\n");
        printf("3. Tri a bulles\n");
        printf("4. Quitter\n");
        printf("Choisissez un algorithme de tri: ");
        scanf("%d", &choix);

        if (choix == 4) {
            printf("Quitter le programme.\n");
            break;
        }

        printf("Choisissez l'ordre de tri:\n");
        printf("1. Croissant\n");
        printf("2. Decroissant\n");
        printf("Votre choix: ");
        scanf("%d", &ordre);

        croissant = (ordre == 1);

        switch (choix) {
            case 1:
                triSelection(arr, n, croissant);
                printf("Tableau trie par selection:\n");
                break;
            case 2:
                triInsertion(arr, n, croissant);
                printf("Tableau trie par insertion:\n");
                break;
            case 3:
                triBulle(arr, n, croissant);
                printf("Tableau trie a bulles:\n");
                break;
            default:
                printf("Choix invalide. Veuillez reessayer.\n");
                continue;
        }
        afficherTableau(arr, n);

    } while (choix != 4);

    free(arr);
    return 0;
}
