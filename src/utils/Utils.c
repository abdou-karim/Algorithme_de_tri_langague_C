//
// Created by abdou on 5/25/2024.
//
#include "Utils.h"
#include <stdio.h>

void afficherTableau(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void lireTableau(int arr[], int n) {
    printf("Entrez les elements du tableau:\n");
    for (int i = 0; i < n; i++) {
        printf("element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int lireTailleTableau() {
    int taille;
    do {
        printf("Entrez la taille du tableau (doit etre positive): ");
        scanf("%d", &taille);
    } while (taille <= 0);
    return taille;
}


