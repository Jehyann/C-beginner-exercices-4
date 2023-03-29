// Exercice 3 :
// 1- Créer une structure Arme: - nom: string - degats: int
// 2- Créer une structure Personnage - nom: string - pv: int - classe: [GUERRIER, MAGE, ASSASSIN] -
// arme: Arme
// 3- Créer deux personnages puis deux armes. Enfin, assigner une arme à chaque personnage.
// 4- Afficher les informations de nos personnages ainsi que les caractéristiques de leur arme.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Arme {
    char nom[50];
    int degats;
};

enum Classe {
    GUERRIER,
    MAGE,
    ASSASSIN
};

struct Personnage {
    char nom[50];
    int pv;
    enum Classe classe;
    struct Arme arme;
};

int main(){
    struct Arme arme1 = {"Epée", 10};
    struct Arme arme2 = {"Bâton magique", 15};

    // Création de deux personnages
    struct Personnage perso1 = {"Guerrier", 100, GUERRIER, arme1};
    struct Personnage perso2 = {"Mage", 80, MAGE, arme2};

    // Affichage des informations des personnages et de leurs armes
    printf("Personnage 1 :\n");
    printf("- Nom : %s\n", perso1.nom);
    printf("- Points de vie : %d\n", perso1.pv);
    printf("- Classe : %d\n", perso1.classe);
    printf("- Arme : %c\n", perso1.arme);

    printf("Personnage 2 :\n");
    printf("- Nom : %s\n", perso2.nom);
    printf("- Points de vie : %d\n", perso2.pv);
    printf("- Classe : %d\n", perso2.classe);
    printf("- Arme : %c\n", perso2.arme);

}