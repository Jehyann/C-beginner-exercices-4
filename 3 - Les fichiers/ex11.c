// Exercice 11 :
// 1- Créer, à la main, un fichier hello.txt et y coller le texte suivant:
// Salut les codeurs, bienvenue dans cette formation sur le C!
// 2- Faire en sorte d'afficher le nombre de caractères et de mots contenus dans le fichier Objectifs
// Statistiques sur le fichier
// hello.txt:
// Nombre de caractères: 59
// Nombre de mots: 10

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE* ptr;
    int character = 0;
    int words = 0;
    char c;

    ptr = fopen("hello3.txt", "r");
    printf("hello3.txt:\n");


    for (c = getc(ptr); c != EOF; c = getc(ptr)) {
        character = character + 1;

        if (c == ' ' || c == '\t' || c == '\n' || c == '\0')
            words++;
    }
    printf("Numbers of character: %d\n", character);
    printf("Numbers of words: %d\n", words);

 


    return 0;
}