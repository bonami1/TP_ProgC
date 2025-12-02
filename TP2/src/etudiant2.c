#include <stdio.h>
#include <string.h>  

struct Etudiant {
    char nom[30];
    char prenom[30];
    char adresse[100];
    float note_prog;
    float note_sys;
};

int main() {
    struct Etudiant etudiants[5];

    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[0].note_prog = 16.5;
    etudiants[0].note_sys  = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    etudiants[1].note_prog = 14.0;
    etudiants[1].note_sys  = 14.1;

    strcpy(etudiants[2].nom, "Durand");
    strcpy(etudiants[2].prenom, "Sophie");
    strcpy(etudiants[2].adresse, "10, Rue de Paris, Marseille");
    etudiants[2].note_prog = 12.5;
    etudiants[2].note_sys  = 13.0;

    strcpy(etudiants[3].nom, "Bernard");
    strcpy(etudiants[3].prenom, "Luc");
    strcpy(etudiants[3].adresse, "5, Avenue Victor Hugo, Bordeaux");
    etudiants[3].note_prog = 9.8;
    etudiants[3].note_sys  = 11.2;

    strcpy(etudiants[4].nom, "Petit");
    strcpy(etudiants[4].prenom, "Anna");
    strcpy(etudiants[4].adresse, "99, Route du Lac, Toulouse");
    etudiants[4].note_prog = 15.0;
    etudiants[4].note_sys  = 17.3;

    printf("===== Liste des etudiant.e.s =====\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Etudiant.e %d :\n", i + 1);
        printf(" Nom       : %s\n", etudiants[i].nom);
        printf(" Prenom    : %s\n", etudiants[i].prenom);
        printf(" Adresse   : %s\n", etudiants[i].adresse);
        printf(" Note 1 (C)           : %.2f\n", etudiants[i].note_prog);
        printf(" Note 2 (Systeme)     : %.2f\n", etudiants[i].note_sys);
        printf("-----------------------------------------\n");
    }

    return 0;
}
