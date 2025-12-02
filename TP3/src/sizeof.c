#include <stdio.h>

int main(void) {
    printf("Taille des types de base :\n");
    printf("int       : %zu octets\n", sizeof(int));
    printf("char      : %zu octets\n", sizeof(char));
    printf("float     : %zu octets\n", sizeof(float));
    printf("double    : %zu octets\n", sizeof(double));
    printf("long      : %zu octets\n", sizeof(long));
    printf("long long : %zu octets\n", sizeof(long long));

    printf("\nTaille des pointeurs :\n");
    printf("int*      : %zu octets\n", sizeof(int*));
    printf("int**     : %zu octets\n", sizeof(int**));
    printf("char*     : %zu octets\n", sizeof(char*));
    printf("char**    : %zu octets\n", sizeof(char**));
    printf("char***   : %zu octets\n", sizeof(char***));
    printf("float*    : %zu octets\n", sizeof(float*));
    printf("float**   : %zu octets\n", sizeof(float**));
    printf("float***  : %zu octets\n", sizeof(float***));

    return 0;
}
