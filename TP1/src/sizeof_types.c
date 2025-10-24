#include <stdio.h>

int main(void) {
    printf("Taille signed char       : %zu octets\n", sizeof(signed char));
    printf("Taille unsigned char     : %zu octets\n", sizeof(unsigned char));

    printf("Taille signed short      : %zu octets\n", sizeof(signed short));
    printf("Taille unsigned short    : %zu octets\n", sizeof(unsigned short));

    printf("Taille signed int        : %zu octets\n", sizeof(signed int));
    printf("Taille unsigned int      : %zu octets\n", sizeof(unsigned int));

    printf("Taille signed long int   : %zu octets\n", sizeof(signed long int));
    printf("Taille unsigned long int : %zu octets\n", sizeof(unsigned long int));

    printf("Taille signed long long int   : %zu octets\n", sizeof(signed long long int));
    printf("Taille unsigned long long int : %zu octets\n", sizeof(unsigned long long int));

    printf("Taille float        : %zu octets\n", sizeof(float));
    printf("Taille double       : %zu octets\n", sizeof(double));
    printf("Taille long double  : %zu octets\n", sizeof(long double));

    return 0;
}
