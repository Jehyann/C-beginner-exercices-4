// Exercice 7 :
// 1- Demander à l’utilisateur combien d’entier il souhaite. 
// 2- Allouer dynamiquement un tableau
// d’entier en utilisant la saisie utilisateur pour la taille 
// 3- Demander à l’utilisateur de remplir le tableau.
// 4- Afficher le contenue du tableau.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int taille_tableau;

    // Demander à l'utilisateur combien d'entiers il souhaite
    printf("Combien d'entiers voulez-vous entrer ? ");
    scanf("%d", &taille_tableau);

    // Allouer dynamiquement un tableau d'entiers en utilisant la saisie utilisateur pour la taille
    int* tableau = (int*) malloc(taille_tableau * sizeof(int));

    // Vérifier si l'allocation a réussi
    if (tableau == NULL) {
        printf("Erreur : impossible d'allouer dynamiquement l'espace mémoire.\n");
        return 1;
    }

    // Demander à l'utilisateur de remplir le tableau
    printf("Entrez les entiers :\n");
    for (int i = 0; i < taille_tableau; i++) {
        scanf("%d", &tableau[i]);
    }

    // Afficher le contenu du tableau
    printf("Contenu du tableau :\n");
    for (int i = 0; i < taille_tableau; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    // Libérer l'espace mémoire alloué
    free(tableau);

    return 0;
}