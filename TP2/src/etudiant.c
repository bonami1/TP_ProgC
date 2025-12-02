#include <stdio.h>

int main() {

    char noms[5][20] = {
        "Durand",
        "Martin",
        "Bernard",
        "Petit",
        "Robert"
    };

    char prenoms[5][20] = {
        "Alice",
        "Louis",
        "Emma",
        "Nathan",
        "Sarah"
    };

    char adresses[5][50] = {
        "12 Rue des Fleurs",
        "45 Avenue Victor Hugo",
        "78 Boulevard de Paris",
        "3 Rue de Lyon",
        "99 Route du Lac"
    };

    float note_prog[5] = {15.5, 12.0, 18.0, 9.5, 14.0};
    float note_sys[5]  = {14.0, 11.5, 16.5, 10.0, 13.5};

    printf("===== Liste des etudiants =====\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d:\n", i + 1);
        printf(" Nom        : %s\n", noms[i]);
        printf(" Prenom     : %s\n", prenoms[i]);
        printf(" Adresse    : %s\n", adresses[i]);
        printf(" Note C     : %.2f\n", note_prog[i]);
        printf(" Note SE    : %.2f\n", note_sys[i]);
        printf("-------------------------------\n");
    }

    return 0;
}
