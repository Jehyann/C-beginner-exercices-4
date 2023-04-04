// Exercice 6 :
// 1- Lire le nom de l’utilisateur au clavier en acceptant les espaces. Limiter la taille de la chaîne à 99
// caractères.
// 2- Faire en sorte que la taille en mémoire prise par la variable qui stocke la saisie utilisateur soit
// égale à la taille de la chaîne. (pas de cases perdus)
// 3- Afficher le contenue de la string et sa taille en mémoire et son nombre de caractères.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Lire le nom de l'utilisateur au clavier en acceptant les espaces
    char input[100];
    printf("Veuillez entrer votre nom : ");
    fgets(input, 100, stdin);

    // Supprimer le caractère de nouvelle ligne à la fin de la chaîne de caractères
    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }

    // Faire en sorte que la taille en mémoire prise par la variable qui stocke la saisie utilisateur soit égale à la taille de la chaîne
    char* nom_utilisateur = (char*) malloc(strlen(input) + 1);
    strcpy(nom_utilisateur, input);

    // Afficher le contenu de la chaîne et sa taille en mémoire et son nombre de caractères
    printf("Nom d'utilisateur : %s\n", nom_utilisateur);
    printf("Taille en memoire : %lu octets\n", sizeof(nom_utilisateur));
    printf("Nombre de caracteres : %zu\n", strlen(nom_utilisateur));

    // Libérer l'espace mémoire alloué
    free(nom_utilisateur);

    return 0;
}