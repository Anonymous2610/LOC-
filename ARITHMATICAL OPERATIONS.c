#include <stdio.h>

int main() {
    int a, b;
    printf("enter two numbers:");
    scanf("%d %d", &a, &b);
    printf("\nSummation: %d", a+b);
    printf("\nSubtraction: %d", a-b);
    printf("\nDivision: %d", a/b);
    printf("\nmultiplication: %d", a*b);
    return 0;
}
