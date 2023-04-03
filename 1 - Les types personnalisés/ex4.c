// Exercice 4 :
// 1- Créer une structure Etudiant qui contient: - nom: string - prenom: string - moyenne: float
// 2- Créer une liste d’étudiant
// 3- Afficher uniquement les étudiants qui ont obtenus leur diplôme (moyenne >= 10).

#include <stdio.h>
#include <stdlib.h>

#define TAILLE_STRING 100
#define TAILLE_PROMO 5
#define NOTE_MOYENNE 10.0

typedef struct ETUDIANT
{
    char nom[TAILLE_STRING];
    char prenom[TAILLE_STRING];
    float moyenne;
}Etudiant;

int main()
{
    //liste des étudiant dans la promo
    Etudiant promo[TAILLE_PROMO] =
    {
        { "wozniak", "steve", 13.63},
        { "ritchie", "dennis", 15.21},
        { "thompson", "ken", 5.98},
        { "gate", "bill", 12.56},
        { "zukzergerg", "mark", 9.56}
    };

    // Affichage des �tudiants loreats de la promo
    printf("Liste des loreats:\n");

    for(int i=0; i<TAILLE_PROMO; i++)
    {
        Etudiant candidat = promo[i];
        if(candidat.moyenne >= NOTE_MOYENNE)
            printf("\t%s %s: %f\n", candidat.prenom, candidat.nom, candidat.moyenne);
    }

    return 0;
}