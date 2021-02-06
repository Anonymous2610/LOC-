#include <stdio.h>

int main() {
    int r;
    int D;
    printf("enter radius:");
    scanf("%d", &r);
    D = 2 * r;
    printf("diameter: %d",D);
    float A;
    A = 22/7*r*2;
    printf("\ncicumference: %9.3f",A);
    float C;
    C = 22/7*(r*r);
    printf("\nArea: %9.3f",C);
    return 0;
}
