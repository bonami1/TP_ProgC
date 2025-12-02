#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main(void) {
    int tableau[SIZE];
    int i, entierCherche;
    int trouve = 0; 

    srand(time(NULL));

    for (i = 0; i < SIZE; i++) {
        tableau[i] = rand() % 100 - 50;
    }

    printf("Tableau :\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");

    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &entierCherche);

    for (i = 0; i < SIZE; i++) {
        if (tableau[i] == entierCherche) {
            trouve = 1;
            break; 
        }
    }

    if (trouve) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
