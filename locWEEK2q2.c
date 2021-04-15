#include <stdio.h>

int main(void) {
	// your code goes here
    int n,digits=0,total =0;
	scanf("%d",&n);
	
	while ( n > 0){
	    total = total+ n%10;
	    n = n/10;
	    digits+=1;
	}
	printf("%d",total);
	return 0;
}

