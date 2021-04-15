#include <string.h>
#include <stdio.h>

int main(void) {
char str[] = "This is a sample string";
    char * pch;
    int words = 0;
    pch=strchr(str,' ');
    
    while (pch!=NULL)
    {
      words ++;
      pch=strchr(pch+1,' ');
    }
	printf("%d",words);
	return 0;
}

