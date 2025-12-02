#include <stdio.h>

int main() {
    int d = 0x10001000; 

    int bit4_pos = 31 - 3;   // = 28
    int bit20_pos = 31 - 19; // = 12

    int bit4  = (d >> bit4_pos) & 1;
    int bit20 = (d >> bit20_pos) & 1;

    int resultat = (bit4 == 1 && bit20 == 1) ? 1 : 0;

    printf("Resultat : %d\n", resultat);

    return 0;
}
