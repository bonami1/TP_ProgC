#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 11  // Taille des tableaux

int main(void) {
    int tabInt[SIZE];
    float tabFloat[SIZE];

    srand(time(NULL)); 

    int *pInt = tabInt;
    float *pFloat = tabFloat;

    for (int i = 0; i < SIZE; i++) {
        *(pInt + i) = rand() % 101;           // Entiers entre 0 et 100
        *(pFloat + i) = ((float)(rand() % 1000)) / 100.0f; // Float entre 0.0 et 9.99
    }

    printf("Tableau d'entiers (avant multiplication) :\n");
    for (int *ptr = tabInt; ptr < tabInt + SIZE; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");

    printf("Tableau de floats (avant multiplication) :\n");
    for (float *ptr = tabFloat; ptr < tabFloat + SIZE; ptr++) {
        printf("%.2f ", *ptr);
    }
    printf("\n");

    for (int i = 0; i < SIZE; i += 2) {
        *(pInt + i) *= 3;
        *(pFloat + i) *= 3.0f;
    }

    printf("\nTableau d'entiers (après multiplication) :\n");
    for (int *ptr = tabInt; ptr < tabInt + SIZE; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");

    printf("Tableau de floats (après multiplication) :\n");
    for (float *ptr = tabFloat; ptr < tabFloat + SIZE; ptr++) {
        printf("%.2f ", *ptr);
    }
    printf("\n");

    return 0;
}
