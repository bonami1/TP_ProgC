#include <stdio.h>

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int nbTests = sizeof(nombres) / sizeof(nombres[0]);

    for (int t = 0; t < nbTests; t++) {
        int n = nombres[t];

        printf("Nombre : %d\nBinaire : ", n);

        for (int i = 31; i >= 0; i--) {
            int bit = (n >> i) & 1; 
            printf("%d", bit);
          
            if (i % 4 == 0 && i != 0) {
                printf(" ");
            }
        }

        printf("\n\n");
    }

    return 0;
}
