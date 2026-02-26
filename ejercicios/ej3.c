
#include <stdio.h>

int main() {

    int a[3];
    int b[3];
    int c[3];
    int i;

    printf("Arreglo a:\n");
    for(i = 0; i < 3; i++) {
        printf("%p\n", &a[i]);
    }

    printf("\nArreglo b:\n");
    for(i = 0; i < 3; i++) {
        printf("%p\n", &b[i]);
    }

    printf("\nArreglo c:\n");
    for(i = 0; i < 3; i++) {
        printf("%p\n", &c[i]);
    }

    return 0;
}
