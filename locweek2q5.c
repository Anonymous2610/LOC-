#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	
	for(int i = 0; i < n; i++){
	    for( int j = 0; j <n; j++){
	        if( i==j || i==n-j-1){
	            printf("*");
	        } else {
	            printf(" ");
	        }
	    }
	    printf("\n");
	}
	
	
	
}

