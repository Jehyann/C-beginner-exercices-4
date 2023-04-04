// Exercice 5 :
// 1- Allouer dynamiquement un entier pour stocker l'âge de l’utilisateur.
// 2- Utiliser cette variable lors de la lecture de la saisie utilisateur
// 3- Afficher le contenu de la variable.

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allouer dynamiquement un entier pour stocker l'âge de l'utilisateur
    int* age = (int*) malloc(sizeof(int));

    // Vérifier si l'allocation a réussi
    if (age == NULL) {
        printf("Erreur : impossible d'allouer dynamiquement l'espace mémoire.\n");
        return 1;
    }

    // Utiliser cette variable lors de la lecture de la saisie utilisateur
    printf("Veuillez entrer votre âge : ");
    scanf("%d", age);

    // Afficher le contenu de la variable
    printf("Vous avez %d ans.\n", *age);

    // Libérer l'espace mémoire alloué
    free(age);

    return 0;
}