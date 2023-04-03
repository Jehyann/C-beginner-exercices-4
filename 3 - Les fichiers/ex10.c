// Exercice 10 :
// 1- Créer un programme qui permet d’ouvrir un fichier hello.txt en écriture. Faire en sorte que le
// fichier soit créé automatiquement si il n’existe pas.
// 2- Ecrire dans ce fichier, via le programme, le texte suivant:
// Salut les codeurs, bienvenue dans cette formation sur le C
// 3- Faire en sorte qu'à chaque exécution, le texte soit ajouté à la suite du contenu du fichier.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE* ptr;

    ptr = fopen("hello2.txt", "a");

    fputs("Salut les codeurs, bienvenue dans cette formation sur le C\n", ptr);

    return 0;
}