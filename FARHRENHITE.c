#include <stdio.h>

int main() {
    int c;
    printf("enter celsius:");
    scanf("%d", &c);
    float f;
    f = (1.8*c) + 32;
    printf("%9.2f\n",f);
    return 0;
    
}
