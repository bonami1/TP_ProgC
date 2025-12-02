#include <stdio.h>
#include <stdint.h>

#define PRINT_INT(var) \
    printf("%-22s: addr=%p, value=0x%llx\n", #var, (void*)&var, (unsigned long long)var)

void print_float(const char* name, float* f) {
    union { float f; unsigned int u; } uf = { *f };
    printf("%-22s: addr=%p, value=0x%08x\n", name, (void*)f, uf.u);
}

void print_double(const char* name, double* d) {
    union { double d; unsigned long long u; } ud = { *d };
    printf("%-22s: addr=%p, value=0x%016llx\n", name, (void*)d, ud.u);
}

void print_long_double(const char* name, long double* ld) {
    union { long double ld; unsigned long long u[2]; } uld = { *ld };
    printf("%-22s: addr=%p, value=0x%016llx%016llx\n", name, (void*)ld, uld.u[1], uld.u[0]);
}

int main(void) {
    signed char c = -100; unsigned char uc = 200;
    signed short s = -30000; unsigned short us = 60000;
    signed int i = -100000; unsigned int ui = 3000000000U;
    signed long l = -2000000000L; unsigned long ul = 4000000000UL;
    signed long long ll = -9000000000000000000LL; unsigned long long ull = 18000000000000000000ULL;
    float f = 3.14f; double d = 2.718281828; long double ld = 1.61803398875L;

    printf("===== Avant manipulation =====\n");
    PRINT_INT(c); PRINT_INT(uc);
    PRINT_INT(s); PRINT_INT(us);
    PRINT_INT(i); PRINT_INT(ui);
    PRINT_INT(l); PRINT_INT(ul);
    PRINT_INT(ll); PRINT_INT(ull);
    print_float("f", &f);
    print_double("d", &d);
    print_long_double("ld", &ld);

    /* Manipulation via pointeurs */
    c++; uc--; s++; us--; i++; ui--; l++; ul--; ll++; ull--;
    f += 1.0f; d += 1.0; ld += 1.0L;

    printf("\n===== Après manipulation =====\n");
    PRINT_INT(c); PRINT_INT(uc);
    PRINT_INT(s); PRINT_INT(us);
    PRINT_INT(i); PRINT_INT(ui);
    PRINT_INT(l); PRINT_INT(ul);
    PRINT_INT(ll); PRINT_INT(ull);
    print_float("f", &f);
    print_double("d", &d);
    print_long_double("ld", &ld);

    return 0;
}
