#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main(void) {
    int tableau[SIZE];
    int i, j, temp;

    srand(time(NULL));

    for (i = 0; i < SIZE; i++) {
        tableau[i] = rand() % 100 - 50; 
    }

    printf("Tableau non trié :\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");

    // Tri à bulles
    for (i = 0; i < SIZE - 1; i++) {
        for (j = 0; j < SIZE - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }
    printf("Tableau trié par ordre croissant :\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
