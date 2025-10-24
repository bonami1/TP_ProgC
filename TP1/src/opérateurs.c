#include <stdio.h>

int main(void) {
    int a = 16;
    int b = 3;

    /* Opérations arithmétiques */
    int addition = a + b;
    int soustraction = a - b;
    int multiplication = a * b;
    int division = a / b;      /* division entière */
    int modulo = a % b;

    /* Opérateurs logiques / de comparaison */
    int egal = (a == b);       /* vaut 1 si vrai, 0 si faux */
    int superieur = (a > b);   /* vaut 1 si vrai, 0 si faux */

    /* Affichage des résultats */
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    printf("\n--- Opérateurs arithmétiques ---\n");
    printf("a + b = %d\n", addition);
    printf("a - b = %d\n", soustraction);
    printf("a * b = %d\n", multiplication);
    printf("a / b = %d\n", division);
    printf("a %% b = %d\n", modulo);

    printf("\n--- Opérateurs de comparaison ---\n");
    printf("a == b → %d\n", egal);
    printf("a > b  → %d\n", superieur);

    return 0;
}
