#include <string.h>
#include <stdio.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int main(void) {
int n,digits=0,x,sum=0;
	scanf("%d",&n);
	x = n;
	while( n>0){
	   n = n/10;
	   digits++;
	}
	
	int arr[digits];
	
	for( int i =0; i < digits; i++){
	    arr[digits-i-1] = x%10;
	    x = x/10;
	}
	
	qsort(arr,digits,sizeof(int),cmpfunc);
    
    printf(" Smallest number: %d \n",arr[0]);
    printf(" Largest Number : %d", arr[digits-1]);
}

