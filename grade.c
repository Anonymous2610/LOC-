#include <stdio.h>

int main() {
    int a,b,c,d,e;
    printf("enter Physics, Chemistry, Biology,Mathematics and Computer respectively:\n");
    scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
    float percentage;
    percentage =(a+b+c+d+e)/5;
    if (percentage >= 90) {
        printf("%s","Grade A\n");
    else if (percentage >= 80)
        printf("%s","Grade B\)
    else if (percentage>= 70)
        printf("%s","Grade C\n");
    else if (percentage >= 60)
        printf("%s","Grade D\n");
    else if (percentage >= 40)
        printf("%s","Grade E\n");
    else
        printf("%s","Grade F\n");
    }
    return 0
}
    
    
    
