#include <stdio.h>

void main() {
   char k;
   printf("Enter a alphabet:");
   scanf("%c", &k);
   switch (k)
   {
       case 'a':
       case 'e':
       case 'i':
       case 'o':
       case 'u':
       case 'A':
       case 'E':
       case 'U':
       case 'O':
       case 'I':
        printf("alphabet is a vowel");
        break;
    default:
        printf("alphabet is a consonant");
    }
}
    
    
    
