// Exercice 9 :
// 1- Créer un fichier hello.txt et y inscrire le texte suivant :
// Salut les codeurs !
// Comment allez vous?
// 2- Faire en sorte de lire le contenu du fichier dans votre programme
// 3- Afficher le contenu du fichier depuis votre programme.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE* ptr;
    char ch;

    ptr = fopen("hello1.txt", "r");
 

    // print
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
 
    } while (ch != EOF);
 
    return 0;
}