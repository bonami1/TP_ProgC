#include <stdio.h>

int main() {

    char chaine1[50] = "Hello";
    char chaine2[50] = " World!";
    char copie[50];
    char concat[100];
    
    int i = 0, j = 0;

    /* ------------------------------ */
    /* 1) Calcul de la longueur d'une chaîne */
    /* ------------------------------ */
    int longueur = 0;
    while (chaine1[longueur] != '\0') {
        longueur++;
    }

    printf("Longueur de \"%s\" = %d\n", chaine1, longueur);


    /* ------------------------------ */
    /* 2) Copie d'une chaîne dans une autre */
    /* ------------------------------ */
    i = 0;
    while (chaine1[i] != '\0') {
        copie[i] = chaine1[i];
        i++;
    }
    copie[i] = '\0';  // fin de chaîne

    printf("Copie de chaine1 : %s\n", copie);


    /* ------------------------------ */
    /* 3) Concaténation de deux chaînes */
    /* ------------------------------ */

    /* d’abord, on copie chaine1 dans concat */
    i = 0;
    while (chaine1[i] != '\0') {
        concat[i] = chaine1[i];
        i++;
    }

    /* ensuite, on ajoute les caractères de chaine2 */
    j = 0;
    while (chaine2[j] != '\0') {
        concat[i] = chaine2[j];
        i++;
        j++;
    }

    concat[i] = '\0';  // fin de chaîne

    printf("Concaténation : %s\n", concat);


    return 0;
}
