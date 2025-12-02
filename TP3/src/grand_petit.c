#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main(void) {
    int tableau[SIZE];
    int i;
    int max, min;

    srand(time(NULL));

    for (i = 0; i < SIZE; i++) {
        tableau[i] = rand() % 1000 + 1;
    }

    max = min = tableau[0];

    for (i = 1; i < SIZE; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
        if (tableau[i] < min) {
            min = tableau[i];
        }
    }

    printf("Le numéro le plus grand est : %d\n", max);
    printf("Le numéro le plus petit est : %d\n", min);

    return 0;
}
