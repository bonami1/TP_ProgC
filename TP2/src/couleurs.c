#include <stdio.h>

// Définition d'une couleur RGBA (chaque composant = 1 octet)
struct Couleur {
    unsigned char r;   // rouge
    unsigned char g;   // vert
    unsigned char b;   // bleu
    unsigned char a;   // alpha
};

int main() {

    // Tableau de 10 couleurs
    struct Couleur couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff}, // Couleur 1
        {0x2c, 0xc8, 0x64, 0xff}, // Couleur 2
        {0x10, 0x20, 0x30, 0xaa}, // Couleur 3
        {0xff, 0x00, 0x00, 0xff}, // Rouge opaque
        {0x00, 0xff, 0x00, 0xff}, // Vert opaque
        {0x00, 0x00, 0xff, 0xff}, // Bleu opaque
        {0xff, 0xff, 0x00, 0x80}, // Jaune semi-transparent
        {0x88, 0x44, 0x22, 0xff}, // Marron
        {0x12, 0x34, 0x56, 0x78}, // Mélange
        {0x00, 0x00, 0x00, 0x00}  // Transparent
    };

    printf("===== Liste des couleurs RGBA =====\n\n");

    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf(" Rouge : %u\n", couleurs[i].r);
        printf(" Vert  : %u\n", couleurs[i].g);
        printf(" Bleu  : %u\n", couleurs[i].b);
        printf(" Alpha : %u\n", couleurs[i].a);
        printf("-------------------------\n");
    }

    return 0;
}
