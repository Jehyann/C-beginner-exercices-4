// Exercice 8 :
// 1- Créer une matrice unitaire de dimension X. la dimension correspond à la saisie utilisateur et doit
// être comprise entre 4 et 10 Une matrice unitaire est constituée de 0 sauf dans sa diagonale qui est
// composée de 1.
// 2- Afficher la matrice comme suite.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int dimension;

    // Demander à l'utilisateur la dimension de la matrice
    do {
        printf("Entrez la dimension de la matrice (entre 4 et 10) : ");
        scanf("%d", &dimension);
    } while (dimension < 4 || dimension > 10);

    // Allouer dynamiquement de la mémoire pour la matrice
    int** matrice = (int**) malloc(dimension * sizeof(int*));
    for (int i = 0; i < dimension; i++) {
        matrice[i] = (int*) malloc(dimension * sizeof(int));
    }

    // Initialiser la matrice avec des 0, sauf la diagonale avec des 1
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            if (i == j) {
                matrice[i][j] = 1;
            } else {
                matrice[i][j] = 0;
            }
        }
    }

    // Afficher la matrice
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }

    // Libérer l'espace mémoire alloué pour la matrice
    for (int i = 0; i < dimension; i++) {
        free(matrice[i]);
    }
    free(matrice);

    return 0;
}