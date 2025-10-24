#include <stdio.h>

int main(void) {
    /* Déclaration et affectation des variables */

    signed char c = -100;
    unsigned char uc = 200;

    signed short s = -30000;
    unsigned short us = 60000;

    signed int i = -100000;
    unsigned int ui = 3000000000U;

    signed long int l = -2000000000L;
    unsigned long int ul = 4000000000UL;

    signed long long int ll = -9000000000000000000LL;
    unsigned long long int ull = 18000000000000000000ULL;

    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.61803398875L;

    /* Affichage des valeurs */

    printf("signed char            : %d\n", c);
    printf("unsigned char          : %u\n", uc);

    printf("signed short           : %d\n", s);
    printf("unsigned short         : %u\n", us);

    printf("signed int             : %d\n", i);
    printf("unsigned int           : %u\n", ui);

    printf("signed long int        : %ld\n", l);
    printf("unsigned long int      : %lu\n", ul);

    printf("signed long long int   : %lld\n", ll);
    printf("unsigned long long int : %llu\n", ull);

    printf("float                  : %f\n", f);
    printf("double                 : %lf\n", d);
    printf("long double            : %Lf\n", ld);

    return 0;
}
