#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main(void) {
    int tableau[SIZE];
    int i;
    int entierCherche;
    int present = 0; // 0 = absent, 1 = présent

    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires entre -50 et 49
    for (i = 0; i < SIZE; i++) {
        tableau[i] = rand() % 100 - 50;
    }

    // Affichage du tableau
    printf("Tableau :\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");

    // Demande de l'entier à chercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &entierCherche);

    // Recherche de l'entier dans le tableau
    for (i = 0; i < SIZE; i++) {
        if (tableau[i] == entierCherche) {
            present = 1;
            break; // On arrête la boucle dès qu'on trouve l'entier
        }
    }

    // Affichage du résultat
    if (present) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}

