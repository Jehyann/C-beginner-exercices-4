// Exercice 4 :
// 1- Créer une structure Etudiant qui contient: - nom: string - prenom: string - moyenne: float
// 2- Créer une liste d’étudiant
// 3- Afficher uniquement les étudiants qui ont obtenus leur diplôme (moyenne >= 10).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Etudiant {
    char nom[100];
    char prenom[100];
    float moyenne;
};

int main() {

    struct Etudiant listeEtudiant[8];

    for (int i = 0; i < 8; i++) {
        printf("\nEtudiant %d:\n", i+1);
        printf("Nom: ");
        scanf("%s", listeEtudiant[i].nom);
        printf("Prenom: ");
        scanf("%s", listeEtudiant[i].prenom);
        printf("Moyenne: ");
        scanf("%f", &listeEtudiant[i].moyenne);
    }

    printf("\nEtudiants ayant obtenu leur diplome:\n");
    for (int i = 0; i < 8; i++) {
        if (listeEtudiant[i].moyenne >= 10) {
            printf("%s %s\n", listeEtudiant[i].nom, listeEtudiant[i].prenom);
        }
    }

    return 0;
}