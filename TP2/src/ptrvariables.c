#include <stdio.h>
#include <stdint.h>

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

    /* Déclaration des pointeurs */
    signed char *pc = &c;
    unsigned char *puc = &uc;

    signed short *ps = &s;
    unsigned short *pus = &us;

    signed int *pi = &i;
    unsigned int *pui = &ui;

    signed long *pl = &l;
    unsigned long *pul = &ul;

    signed long long *pll = &ll;
    unsigned long long *pull = &ull;

    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    /* --- Affichage avant manipulation --- */
    printf("===== Avant manipulation =====\n");
    printf("Adresse de c  : %p, Valeur : %02x\n", (void*)pc, (unsigned char)*pc);
    printf("Adresse de uc : %p, Valeur : %02x\n", (void*)puc, *puc);
    printf("Adresse de s  : %p, Valeur : %04x\n", (void*)ps, (unsigned short)*ps);
    printf("Adresse de us : %p, Valeur : %04x\n", (void*)pus, *pus);
    printf("Adresse de i  : %p, Valeur : %08x\n", (void*)pi, (unsigned int)*pi);
    printf("Adresse de ui : %p, Valeur : %08x\n", (void*)pui, *pui);
    printf("Adresse de l  : %p, Valeur : %016lx\n", (void*)pl, (unsigned long)*pl);
    printf("Adresse de ul : %p, Valeur : %016lx\n", (void*)pul, *pul);
    printf("Adresse de ll : %p, Valeur : %016llx\n", (void*)pll, (unsigned long long)*pll);
    printf("Adresse de ull: %p, Valeur : %016llx\n", (void*)pull, *pull);

    union { float f; unsigned int u; } uf = { f };
    union { double d; unsigned long long u; } ud = { d };
    union { long double ld; unsigned long long u[2]; } uld = { ld };

    printf("Adresse de f  : %p, Valeur : %08x\n", (void*)pf, uf.u);
    printf("Adresse de d  : %p, Valeur : %016llx\n", (void*)pd, ud.u);
    printf("Adresse de ld : %p, Valeur : %016llx%016llx\n", (void*)pld, uld.u[1], uld.u[0]);

    /* --- Manipulation via pointeurs --- */
    (*pc)++;
    (*puc)--;
    (*ps)++;
    (*pus)--;
    (*pi)++;
    (*pui)--;
    (*pl)++;
    (*pul)--;
    (*pll)++;
    (*pull)--;

    uf.f += 1.0f; *pf = uf.f;
    ud.d += 1.0; *pd = ud.d;
    uld.u[0] += 1; uld.u[1] += 1; *pld = uld.ld;

    /* --- Affichage après manipulation --- */
    printf("\n===== Après manipulation =====\n");
    printf("Adresse de c  : %p, Valeur : %02x\n", (void*)pc, (unsigned char)*pc);
    printf("Adresse de uc : %p, Valeur : %02x\n", (void*)puc, *puc);
    printf("Adresse de s  : %p, Valeur : %04x\n", (void*)ps, (unsigned short)*ps);
    printf("Adresse de us : %p, Valeur : %04x\n", (void*)pus, *pus);
    printf("Adresse de i  : %p, Valeur : %08x\n", (void*)pi, (unsigned int)*pi);
    printf("Adresse de ui : %p, Valeur : %08x\n", (void*)pui, *pui);
    printf("Adresse de l  : %p, Valeur : %016lx\n", (void*)pl, (unsigned long)*pl);
    printf("Adresse de ul : %p, Valeur : %016lx\n", (void*)pul, *pul);
    printf("Adresse de ll : %p, Valeur : %016llx\n", (void*)pll, (unsigned long long)*pll);
    printf("Adresse de ull: %p, Valeur : %016llx\n", (void*)pull, *pull);

    printf("Adresse de f  : %p, Valeur : %08x\n", (void*)pf, uf.u + 0x3f800000 - 0x4048f5c3); // recalculé
    printf("Adresse de d  : %p, Valeur : %016llx\n", (void*)pd, ud.u + 0x3ff0000000000000 - 0x4005bf0a8b145769);
    printf("Adresse de ld : %p, Valeur : %016llx%016llx\n", (void*)pld, uld.u[1], uld.u[0]);

    return 0;
}
